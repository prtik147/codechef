#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <utility>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define val(x)                  cout<<#x<<" "<<x<<endl;
#define f(i,a,b)               for(i=a;i<b;i++)
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define all(x) x.begin(),x.end()
#define fr                    first
#define se                    second
#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod                   1000000007
#define PI                    3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "

int main()
{
	ios::sync_with_stdio(false);
	ll t;
    cin>>t;
    while(t--)
    {
    	ll n,d,i;
    	cin>>n>>d;
    	ll a[n];
    	take(a,n);
    	float avg;
    	f(i,0,d)
    	{
    		ll j=0,c=0,s=0;
    		for(;(j+i)<n;j+=d)
    		{
    			s+=a[j+i];
    			c++;
			}
			if(i==0)
			{
				avg=s/c;
				if(avg!=floor(avg))
				break;
			}
			else
			{
				if(avg!=floor(avg))
				break;
				if(avg!=(s/c))
				break;
			}
		}
		ll ans=0;
    	if(i!=d)
    	{
    		cout<<"-1"<<endl;
    		continue;
		}
    	else
    	{
    		fi(i,0,d)
    		{
    			ll e=0,j=0,last=0;
    			for(;(j+i)<n;j+=d)
    			{
    			    ans+=abs(e);
    				if(a[j+i]>avg)
    				{
    					e+=(a[j+i]-avg);
    				//	val(e);
					}
					else if(a[j+i]<avg)
    				{
    					e-=(avg-a[j+i]);
    				//	val(e);
					}
				}
				//val(i);
			}
		}
    cout<<ans<<endl;
    }
    return 0;
}

