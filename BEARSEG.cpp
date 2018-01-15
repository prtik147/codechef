#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <array>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	ll n,p,i;
    	cin>>n>>p;
    	int a[n];
    	ll s[n+1]={0},sm=0;
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		sm+=a[i];
    		s[i+1]=sm;
    	}
    	ll mx=0,mxc=0,j;
    	//prs(s,n+1);nl;

    	for(i=1;i<=n;i++)
    	{
    		for(j=0;j<i;j++)
    		{
    			if(((s[i]-s[j])%p)>mx)
    			{
    				mx=(s[i]-s[j])%p;
    				mxc=1;
    			}
    			else if(((s[i]-s[j])%p)==mx)
    				mxc++;
    		}
    	}
    	cout<<mx<<" "<<mxc<<endl;
    }
    return 0;
}
