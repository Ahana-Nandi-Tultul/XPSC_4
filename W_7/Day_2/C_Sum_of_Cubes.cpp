#include <bits/stdc++.h>
typedef long long int ll;
const int MOD = 1000000007;
using namespace std;

int main()
{
	unordered_map<ll, ll> mp;
	mp[0] = 0;
	for (long long int i = 1; i <= 10001; i++)
	{
		mp[i*i*i]++;
	}

	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		ll x;
		cin>>x;

		ll c = cbrt(x);

		int f=0;

		for (ll i = 1; i <= 10000; i++)
		{
			if(f)
			break;

			ll z=i*i*i;
			if (z >= x)
				break;

			if (mp.find(x - z) != mp.end())
			{
				f = 1;
			}
		}


		if (f){
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}

	}
	return 0;
}
