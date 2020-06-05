#include <bits/stdc++.h>

#define ll long long
#define dd long double

using namespace std;

//See the macros
//Let's go bitwise....

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ans = 0;
		ll t = 1;
		while(t<=n)
		{
			if(n&t)
			{
				ans += (2*t -1);
			}
			t *= 2;
		}
		cout<<ans<<endl;
	}
}
