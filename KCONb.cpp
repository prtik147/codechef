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
#define fi(i,a,b)               for(ll i=a;i<b;i++)
#define fd(i,n,a)               for(ll i=n;i>=a;i--)   
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))
#define pb push_back
#define mp make_pair
typedef vector<ll> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<ll,ll> mii;
typedef map<string,ll> msi;
typedef set<ll> si;
typedef pair<ll,ll> pii;
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
    	ll n,k;
    	cin>>n>>k;
    	ll a[n];
    	take(a,n);
    	ll s=0,ms=0,me=0;
    	fi(i,0,n)
    	s+=a[i];
    	//val(s);
    	if(s>0)
    	{
    		if(k==1)
    		{
    			ll ans=0,sum=0;
    			fi(i,0,n)
    			{
    				sum+=a[i];
    				if(sum<0)
    					sum=0;
    				if(sum>ans)
    					ans=sum;
    			}
    			cout<<ans<<endl;
    			continue;
    		}
    		else if(k==2)
    		{
    			ll b[2*n];
    			fi(i,0,n)
    				b[i]=b[i+n]=a[i];

    			//prs(b,2*n);
    			ll ans=0,sum=0;
    			fi(i,0,2*n)
    			{
    				sum+=b[i];
    				if(sum<0)
    					sum=0;
    				if(sum>ans)
    					ans=sum;
    			}
    			cout<<ans<<endl;
    			continue;
    		}
    		ll sum=0;
    		fi(i,0,n)
    		{
    			sum+=a[i];
    			//if(sum<0)
    			//	sum=0;
    			if(sum>ms)
    				ms=sum;
    		}
    		//val(ms);
    		sum=0;
    		fd(i,n-1,0)
    		{
    			sum+=a[i];
    			//if(sum<0)
    			//	sum=0;
    			if(sum>me)
    				me=sum;
    		}
    		//val(me);
    		ll ans=0;
    		ans+=ms;
    		ans+=me;
    		ans=ans+s*(k-2);
    		
    		cout<<ans<<endl;
    	}
    	else
    	{
    		ll b[2*n];
    			fi(i,0,n)
    				b[i]=b[i+n]=a[i];
    			ll ans=a[0],sum=0;
    			//prs(b,2*n);
    			//nl;
    			if(k==1)
    			{
    				fi(i,0,n)
    				{
    				if(sum<0)
    					sum=0;
    				sum+=a[i];
    			//	val(sum);
    				if(sum>ans)
    					{
    						if(sum!=0)
    						ans=sum;
    						else if(sum==0 && b[i]==0)
    						{
    							ans=sum;
    						//	val(ans);
    						}
    					}
    				}
    				cout<<ans<<endl;
    				continue;
    			}
    			fi(i,0,2*n)
    			{
    				if(sum<0)
    					sum=0;
    				sum+=b[i];
    			//	val(sum);
    				if(sum>ans)
    					{
    						if(sum!=0)
    						ans=sum;
    						else if(sum==0 && b[i]==0)
    						{
    							ans=sum;
    						//	val(ans);
    						}
    					}
    			}
    			cout<<ans<<endl;
    	}
    }
    return 0;
}
