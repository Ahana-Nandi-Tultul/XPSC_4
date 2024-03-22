#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        if((a+b) == c)
        {
            cout << "+" << "\n";
        }
        else if((a-b) == c)
        {
            cout << "-" << "\n";
        }
        else if((b-a) == c)
        {
            cout << "-" << "\n";
        }
    }
    return 0;
}
