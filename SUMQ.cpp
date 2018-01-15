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
	int t;
    cin>>t;
    while(t--)
    {
    	int p,q,r;
    	cin>>p>>q>>r;
    	int a[p],b[q],c[r];
    	ll as[p+1],bs[q+1],cs[r+1];
    	as[0]=0;
    	bs[0]=0;
    	cs[0]=0;
    	fi(i,0,p)
    		cin>>a[i];
    	fi(i,0,q)
    		cin>>b[i];
    	fi(i,0,r)
    		cin>>c[i];

    	sort(a,a+p);
    	sort(b,b+q);
    	sort(c,c+r);

    	ll s=0;
    	fi(i,0,p)
    	{
    		s+=a[i];
    		s%=mod;
    		as[i+1]=s;
    	}
    	s=0;
    	/*fi(i,0,q)
    	{
    		s+=b[i];
    		s%=mod;
    		bs[i+1]=s;
    	}
    	s=0;*/
    	fi(i,0,r)
    	{
    		s+=c[i];
    		s%=mod;
    		cs[i+1]=s;
    	}
    	//prs(a,p);
    	//prs(b,q);
    	//prs(c,r);
    	//prs(as,p+1);
    	//prs(bs,q+1);
    	//prs(cs,r+1);

    	ll ans=0;
    	int pa=0,pc=0;
    	fi(i,0,q)
    	{
    		fi(j,pa,p)
    		{
    			if(b[i]>=a[j])
    				pa++;
    		}
    		fi(j,pc,r)
    		{
    			if(b[i]>=c[j])
    				pc++;
    		}
    		//cout<<as[pa]<<" "<<cs[pc]<<endl;
    		ll res;
    		res=(as[pa]*cs[pc]);
    		res %= mod;
    		ans+=res;
    		ans %= mod;
    		res=(as[pa]*b[i])*pc;
    		res %= mod;
    		ans+=res;
    		ans %= mod;
    		res=(b[i]*cs[pc])*pa;
    		res %= mod;
    		ans+=res;
    		ans %= mod;
    		res=(b[i]*b[i])*(pc*pa);
    		res %= mod;
    		ans+=res;
    		ans %= mod;
    		//cout<<ans<<endl;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}