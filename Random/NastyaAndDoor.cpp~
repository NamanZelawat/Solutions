#include <bits/stdc++.h>

#define ll long long
#define dd long double

//Nastya and door......
// See the macros......

using namespace std;

int main()
{
	ll t ;
	cin>>t; // For all the test cases
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		for(ll i =0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<ll> nop(n); // Keeps track of number of peaks
		for(ll i = 0;i<n;i++)
		{
			nop[i] = 0; // initializing with 0
		}
		for(ll i = 1;i<n-1;i++)
		{
			//Taken from 1 to n-1 because corners cannot be peak.
			//Given in question.
			if(a[i] > a[i+1] && a[i] > a[i-1])
			{
				nop[i] = nop[i-1] + 1; // increment by one if one peak is found
			}
			else
			{
				nop[i] = nop[i-1]; //else same as before
			}
		}
		//As we left the last element of array
		nop[n-1] = nop[n-2];
		ll t = 0,l = 1; // Taking vars for output as given in question
		for(ll i = 0;i+k-1<n;i++)
		{
			// As taking segments of length k
			if(nop[i+k-2] -nop[i] > t)
			{
				//Taking i+k-2 rather than i+k-1 because corners should
				//not be taken as given in question.
				t = nop[i+k-2] -nop[i];
				l = i+1; // As array has 0 based indexing
			}
		}
		cout<<t+1<<" "<<l<<endl; //Taking t+1 because no. of pieces
		//are one greater than the number of peaks
		//thanks for watching code can be found in description.
	}
}
