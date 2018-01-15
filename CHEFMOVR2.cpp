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
    	ll n,d,s=0,i=0,ans=0,j=0;
    	cin>>n>>d;
    	ll a[n];
    	take(a,n);
    	ll avg;
    	//val(n);
    	fi(i,0,n)
    	s+=a[i];
    	avg=s/n;
    	
    	//s=0;
    	/*for(i=0;i<d;i++)
    	{
    		ll c=0,s=0;
    		for(int j=i;j<n;j+=d)
    		{
    			s+=a[j];
    			c++;
			}
				if(avg!=floor(avg))
				break;
				if(avg!=(s/c))
				break;
			
		}*/
	//	ll e,nd,ans=0;
		//val(avg);
    	/*if(i!=d)
    	{
    		cout<<"-1"<<endl;
    		continue;
		}*/
		ll e=0,nd=0,w=0;
		bool f=false;
		if(s%n!=0)
    	{
    	//	cout<<"-1"<<endl;
    		f=true;
    		//cout<<f;
		}
    	else
    	{
    		ans=0;
    		//val(avg);
    		//val(n);
    		for(i=0;i<d;i++)
    		{
    			 e=0;
				 nd=0;
				 w=0;
    			for(int j=i;j<n;j+=d)
    			{
    				if(a[j]>avg)
    				{
    					e+=(a[j]-avg);
    					w=w+(a[j]-avg);
    				//	val(e);
					}
					else if(a[j]<avg)
    				{
    					nd+=(avg-a[j]);
    					w=w-(avg-a[j]);
    				//	val(e);
					}	
				  if(nd>e)
					{
						ans=ans+nd-e;
						nd=nd-e;
						e=0;
						
					}
					else if(nd==e)
					{
						nd=0;
						e=0;
					}
					else
					{
						ans= ans+e-nd;
						e=e-nd;
						nd=0;
						
					} }
				 if(w!=0)
				 break;
				}
			}
			if(w!=0 || f==true)
			cout<<"-1"<<endl;
			else
			cout<<ans<<endl;
			
    
    }
    return 0;
}
