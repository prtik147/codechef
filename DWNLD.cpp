/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
//15118050               //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)


int main() 
{
	    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,i;
    	cin>>n>>k;
    	int a[n][2];
    	forall(i,0,n)
    	cin>>a[i][0]<<a[i][1];
    	int s=0;
    	forall(i,0,n-1)
    	{
    		
    		if(s+a[i][0] <k)
    			s+=a[i][0];
    		else if(s+a[i][0] ==k)
    			{
    				s+=a[i][0];
    			break;
    			}
    			else 
    				break;
    	}
    	ll ans=0;
    	ans+=(k-s)*a[i][1];
    	i++;
    	for(i;i<n;i++)
    	{
    		ans+=(a[i][0]*a[i][1]);
    	}
    	cout<<ans<<endl;

    }
    return 0;
}