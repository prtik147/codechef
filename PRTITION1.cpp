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
    	ll x,n;
    	cin>>x>>n;
    	ll s;
    	s=n*(n+1)/2;
    	//val(s);
    	s-=x;
    	if(s%2!=0)
    	{
    		cout<<"impossible"<<endl;
    		continue;
    	}
    		s/=2;
    		//val(s);
    		ll a[n+1]={0};
    		//val(x);
    		a[x]=2;
    		fd(i,n,0)
    		{
    			if(s>=i && a[i]!=2)
    			{
                    if(s==(i+x))
                        continue;
    				s-=i;
    				a[i]=1;
    				//val(s);
    			}
    			if(s==0)
    				break;
    		}
    		if(s!=0)
    		{
    			cout<<"impossible\n";
 
    		}
    		else
    		{
    		fi(i,1,n+1)
    		cout<<a[i];
    		nl;
    		}
    	}
    return 0;
}