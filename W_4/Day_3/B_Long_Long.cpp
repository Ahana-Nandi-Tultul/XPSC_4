#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long int sum = 0, cnt = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] < 0)
            {
                sum += (a[i] * (-1));
            }
            else
            {
                sum += a[i];
            }
        }
        for(int i = 0; i < n;){
			int j = i + 1;
			if(a[i] < 0){
				if(j == n){
					++cnt;
					break;
				}
				while(a[j] < 0 || a[j] == 0){
					++j;
					if(j == n) break;
				}
				++cnt;
			}
			i = j;
		}
        cout << sum  << " " << cnt << "\n";
    }
    return 0;
}
