/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
//15118050               //
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
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sll(n)                      scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))

#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

int main() 
{
	int n,m;
	int i;
	cin>>n>>m;
	int a[n];
	forall(i,0,n)
	cin>>a[i];

	vpii v;
	int c=1,p=0,q;
	forall(i,0,n-1)
	{
		if(a[i]!=a[i+1])
		{
			for(q=p;q<=i;q++)
			v.pb(mp(p,i));
				p=i+1;
		}
	}
	for(q=p;q<=i;q++)
	v.pb(mp(p,i));
	vpii ::iterator k;
	
	//for(k=v.begin();k!=v.end();k++)
	//cout<<k->fi<<" "<<k->se<<endl;
	while(m--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		l--;
		r--;

		/*if((r-l+1)%2!=0)
		{
			int x=(l+r)/2;
			if((v[x].se-v[x].fi+1)>=k)
				cout<<a[x]<<endl;
			else
				cout<<"-1"<<endl;
		}
		else
		{
			int y=(r-l+1)/2;
			int x=(r+l+1)/2;
			if((v[x].se-v[x].fi+1)>=k && a[y]==a[y-1])
				cout<<a[x]<<endl;
			else
				cout<<"-1"<<endl;
		}*/
		int x=(l+r)/2;
		int aa,b;
		aa=MAX(l,v[x].fi);
		b=MIN(r,v[x].se);
		if((b-aa+1)>=k)
			cout<<a[x]<<endl;
		else
			cout<<"-1"<<endl;
	}
return 0;
}