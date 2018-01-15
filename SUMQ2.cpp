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
	int t;
    cin>>t;
    while(t--)
    {
    	ll p,q,r;
    	cin>>p>>q>>r;
    	vll a,b,c;
    	ll as[p],cs[r];
    	//as[0]=0;
    	//cs[0]=0;
        int num;
    	fi(i,0,p)
    		{
                cin>>num;
                a.pb(num);
            }
    	fi(i,0,q)
    		{
                cin>>num;
                b.pb(num);
            }
    	fi(i,0,r)
    		{
                cin>>num;
                c.pb(num);
            }

    	sort(a.begin(),a.end());
    	sort(b.begin(),b.end());
    	sort(c.begin(),c.end());

    	ll s=0;
    	fi(i,0,p)
    	{
    		s+=a[i];
    		s%=mod;
    		as[i]=s;
    	}
    	s=0;
    	fi(i,0,r)
    	{
    		s+=c[i];
    		s%=mod;
    		cs[i]=s;
    	}
    	ll ans=0;
    	//int pa=0,pc=0;
       /* prs(a,p);
        prs(b,q);
        prs(c,r);
        prs(as,p);
        prs(cs,r);*/
    	fi(i,0,q)
        {
            int j = upper_bound(a.begin() ,a.end(),b[i]) - a.begin() ;
            int k = upper_bound(c.begin() ,c.end(),b[i]) - c.begin() ;
           
            //if(j==-1 || k==-1)
             //   continue;
            //val(j);
            //val(k);
            ll res1,res2;
            res1=(b[i]*(j)+as[j-1])%mod;
            res2=(b[i]*(k)+cs[k-1])%mod;
            ans=(ans+(res1*res2)%mod)%mod;
        }
        cout<<ans%mod<<endl;
    }
    return 0;
}