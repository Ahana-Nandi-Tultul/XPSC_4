#include <bits/stdc++.h>
using namespace std;

long long products_in_time(const vector<long long>& times, long long T) {
    long long total_products = 0;
    for (long long time : times) {
        total_products += T / time;
        if (total_products >= 1e18) {
            return LLONG_MAX;
        }
    }
    return total_products;
}

int main() {
    long long n, t;
    cin >> n >> t;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long low = 1;
    long long high = *max_element(a.begin(), a.end()) * t;
    long long result = high;

    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (products_in_time(a, mid) >= t) {
            result = mid;
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << result << "\n";
    return 0;
}
