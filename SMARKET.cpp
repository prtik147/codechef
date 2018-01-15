/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
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
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))

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
#define fi first
#define se second
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n,q,i;
    	cin>>n>>q;
    	int a[n+1];
    	for(i=1;i<=n;i++)
    		cin>>a[i];
    	vpii v;
    	int f,s;
    	f=1;
    	forall(i,1,n)
    	{
    		if(a[i]!=a[i+1])
    		{
    			s=i;
    			v.pb(mp(f,s));
    			f=i+1;
    		}
    	}
    	v.pb(mp(f,n));
    	vpii ::iterator it;
    	/*for(it=v.begin();it!=v.end();it++)
    	{
    		cout<<it->fi<<" "<<it->se<<endl;
    	}*/
    	while(q--)
    	{
    		int l,r,k;
    		cin>>l>>r>>k;
    		//cout<<l<<r<<k;
    		i=0;
    		ll c=0,ans=0;
    		while(v[i].se<l)
    			{i++;}
    		while(v[i].fi<=r && i<v.size())
    		{
    			if(v[i].fi<=l && v[i].se>=r)
    				c+=(r-l+1);
    			else if(v[i].fi>l && v[i].se>=r)
    				c+=(r-v[i].fi+1);
    			else if(v[i].fi<=l && v[i].se<r)
    				c+=(v[i].se-l+1);
    			else if(v[i].fi>l && v[i].se<r)
    				c+=(v[i].se-v[i].fi+1);
    			if(c>=k)
    			ans++;
    			c=0;
    			i++;
    		}
    		cout<<ans<<endl;

    	}
    }
    return 0;
}