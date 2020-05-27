#include <bits/stdc++.h>

#define ll long long
#define dd long double

//codeforces #645 div2.
//Considering you have read the question.
//See the defined macros..
//lets go..

using namespace std;

int main()
{
	ll t;
	cin>>t; // Taking all the testcases in consideration.
	while(t--)
	{
		ll n,m;
		cin>>n>>m; //taking the input of rows and columns.
		if(n%2 == 1) // If n is odd.
		{
			if(m%2 == 1) // If m is odd.
			{
				cout<<(n/2)*m + (m/2)+1<<endl; // first leaving the last row gives (n/2)*m min lights and last row has oddd boxes 
				// so last row need (m/2) + 1 min lights.
			}
			else
			{
				cout<<(n/2)*m + (m/2)<<endl; // similar to above case (n/2)*m and (m/2) as m is even so min lights needed 
				//is m/2 to light whole area.
			}
		}
		else // if both is even
		{
			cout<<(n/2)*m<<endl; // all the rows are covered as one light exactly covers 2 box (max consumption)
		}
	}
	// Thanks for watching code can be found on github link in description.
}
