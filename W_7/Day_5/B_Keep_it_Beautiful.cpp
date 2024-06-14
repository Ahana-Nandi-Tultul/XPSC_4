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
        int flag = 0, first= -1, last = -1;
        for(int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            if(flag)
            {
                if(n >= last && n <= first)
                {
                    last = n;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if(first == -1)
                {
                    first = n;
                    last = n;
                    cout << 1;
                }
                else if(n >= last)
                {
                    last = n;
                    cout << 1;
                }
                else if(first >= n)
                {
                    last = n;
                    flag = 1;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }

            }
        }
         cout << endl;
    }
    return 0;
}
