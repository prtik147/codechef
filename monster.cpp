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
ll n=0;
ll a[1000000];
ll cnt(ll x,ll i,vi v,ll d,ll num,ll y)
{
	ll ans=0;
	//val(n);
		if(i<=d && num<=x)
		{
			if(v[i]==0)
			{
				if(a[num]>0)
				{
					a[num]-=y;
					prs(a,n);
					cout<<" 111";
					nl;

					if(a[num]<=0)
						ans++;
				}
				ans+=cnt(x,i+1, v, d, num*2, y);
				//ans+=cnt(x,a[n],i+1, v, d, num*2, y);
			}
			else
			{
				
				/*if(a[num]>0)
				{
					a[num]-=y;
					prs(a,n);
					cout<<" 222";
					nl;
					if(a[num]<=0)
						ans++;
				}
				num+=1;//pow(2,i);*/
				if(a[num]>0)
				{
					a[num]-=y;
					prs(a,n);
					cout<<" 333";
					nl;
					if(a[num]<=0)
						ans++;
				}
				ans+=cnt(x,i+1, v, d, num+pow(2,i), y);	
			}
		}
		return ans;
}
int main() 
{
	ios::sync_with_stdio(false);
	//ll n;
	cin>>n;
	//ll a[n];
	take(a,n);
	ll q,m=n;
	cin>>q;
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		ll dd;
		ll z=x,d=0;
		vi v;
		while(z)
		{
			v.pb(z%2);
			z/=2;
			d++;
			//val(d);
		}
		prs(a,n);
		nl;
		prs(v,d);
		nl;
		dd=cnt(x,0,v,d,0,y);
		m-=dd;
		val(dd);
		cout<<m<<endl;
		/*for(ll i=0;i<x;i++)
		{
			if( (i & x) == i)
				{
					//prs(a,n);
					//nl;
					//val(i);
					//val(x);
					if(a[i]>0)
					{
						a[i]-=y;
						//val(a[i]);
						//val(y);
						if(a[i]<=0)
							m--;
					}
				}
		}
		cout<<m<<endl;*/
		//prs(v,v.size());
		//nl;
	}
    return 0;
}
