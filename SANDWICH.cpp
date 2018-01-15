#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define val(x)                  cout<<#x<<" "<<x<<endl;
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
    	ll n,k,m,f;
    	cin>>n>>k>>m;
    	f=ceil((float)n/k);
    	ll a[n+1][2]={0};
    	fi(i,1,k+1)
    	a[i][0]=1;

    	fi(i,1,n+1)
    	cout<<a[i][0];
    	nl;

    	fi(i,1,f)
    	{
    		fi(j,1,k)
    		{
    			if(i%2 !=0)
    			{
    				fi(k,1,n)
    				{
    					if(a[k][0]!=0)
    					{
    						if((j+k)<=n)
    							a[j+k][1]=a[k][0]+1;
    					}
    				}
    			}
    			else
    			{
    				fi(k,1,n)
    				{
    					if(a[k][1]!=0)
    					{
    						if((j+k)<=n)
    							a[j+k][0]=a[k][1]+1;
    					}
    				}
    			}
    		}
    	}
    	fi(i,1,n)
    	cout<<a[i][0];
    	nl;
    	fi(i,1,n)
    	cout<<a[i][1];
    	nl;
    }
    return 0;
}