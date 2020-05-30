#include <bits/stdc++.h>

#define ll long long
#define dd long double

using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		dd h,c,temp;
		cin>>h>>c>>temp;
		//Observe that it is making a series.
		//Starting from (h+c)/2       (h+c+h)/3        (h+c+h+c)/4 .........and so on..(As c >= 1)
		
		//So you can see it is an increasing series ???
		
		//It can be proved by contradiction as taking (h+c)/2 > (h+c+h)/3
		//So ->  3*h + 3*c > 4*h + 2*c
		//So -> c > h which is impossible as first we put a cup of hot water and then cold water.
		//So either number of cups of cold water are equal to hot water or less.
		
		//Now making a general term.
		
		//For an even number term it's always (h+c)/2 which is the smallest term of the series.
		
		//For odd number of terms it will be ((n+1)*h+n*c)/(2*n+1) ---(1)  here total number of cups poured is (2*n+1) --- (2).
		//See that total number of terms is always odd.
		
		//Now calculating n from the above formula and using temp as we have to minimize the difference with temp.
		
		//We take if ((n+1)*h+n*c)/(2*n+1) (Above mentioned formula)  -  temp -----> 0
		
		//Taking the above equation the value of n will be = (temp - h)/(h+c - 2*temp)
		
		//So two cases
		
		//1 ----->   if(temp <=  (h+c)/2)(Smallest term as proved above) then ans will be an even number
		//and as we have to print minimum so ans will be 2
		
		//2 ----->  Going for odd we have to take two terms one calculated from formula 
		//n = (temp - h)/(h+c - 2*temp);
		//As we have to print the total number of cups poured so ans will be 2*n+1
		//And we have to check if the next odd term after 2*n + 1 which is 2*n + 3 has lesser differnce
		//than the current odd term(If the temp lies between any two terms the formula will give the lower term)
		//So we have to check if the upper term is more closer or lower.
		
		//So one more formula  
		//if (  abs(((n+1)*h + n*c)/2*n+1 - t)  <   abs(((n+2)*h + (n+1)*c)/2*n+3 - t)     )
		//Slightly solving this equation gives us
		//(   abs(    ((n+1)*h + n*c)    -    (2*n+1)*t    )/2*n+1       <     abs(    ((n+2)*h + (n + 1)*c)    -    (2*n+3)*t    )/2*n+3  )
		//Cross multiply positive values gives
		//(   abs(    ((n+1)*h + n*c)    -    (2*n+1)*t    )*(2*n+3)       <     abs(    ((n+2)*h + (n + 1)*c)    -    (2*n+3)*t    )*(2*n+1)  )
		//then ans will be 2*n+1
		//else ans will be 2*n+3
		
		//Code goes here
		if( (h + c) - 2*temp >=0)
		{
			cout<<2<<endl;
		}
		else
		{
			ll n = ((h-temp)/(2ll*temp - h - c));//from formula 1 
			ll one = abs(    ((n+1ll)*h + n*c)    -    (2ll*n+1ll)*temp    )*(2ll*n+3ll);
			ll two =  abs(    ((n+2ll)*h + (n + 1)*c)    -    (2ll*n+3ll)*temp    )*(2ll*n+1ll);
			if(one<=two)
			{
				cout<<2*n+1<<endl;
			}
			else
			{
				cout<<2*n+3<<endl;
			}
		}
	}
}
