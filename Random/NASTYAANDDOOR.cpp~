#include <bits/stdc++.h>

#define ll long long
#define dd long double

//Nastya and door

using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		for(ll i  = 0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<ll> nop(n);
		for(ll i = 0;i<n;i++)
		{
			nop[i] = 0;
		}
		for(ll i = 1;i<n-1;i++)
		{
			if(a[i]>a[i-1] && a[i] > a[i+1])
			{
				nop[i] = nop[i-1] +1;
			}
			else
			{
				nop[i] = nop[i-1];
			}
		}
		nop[n-1] = nop[n-2];
		ll t = 0,l = 1;
		for(ll i = 0;i+k-1<n;i++)
		{
			if(nop[i+k-2] - nop[i] > t)
			{
				t = nop[i+k-2] - nop[i];
				l = i+1;
			}
		}
		cout<<t+1<<" "<<l<<endl;
	}
}
