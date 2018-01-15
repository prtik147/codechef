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
#define forall(i,a,b)               for(int i=a;i<b;i++)
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
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

int main() 
{
 	long long n,l,r,mn=LLONG_MAX,mx;
	cin>>n>>l>>r;
	long long a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);   

	vector<pair<ll, int> > vp;
	forall(i,0,n-1)
	{
		vp.pb(mp(a[i+1]-a[i]+1,0));
		vp.pb(mp(a[i+1]+a[i]-1,1));
	}
	sort(vp.begin(),vp.end());
	vector<pair<ll,int> >::iterator k;
	ll c=0,cur=0;

	//for(k=vp.begin();k!=vp.end();k++)
	//	cout<<k->first<<" "<<k->second<<endl;

	k=vp.begin();
	if(k->second==0)
	{
		cur++;
	}
	k++;
	for(k;k!=vp.end() && (k-1)->first<=r;k++)
	{
		
		if(k->second==0)
			cur++;
		else
			cur--;

		//if((k-1)->first >= r)
		//		break;
		//(k-1)->first!=k->first
		if(cur && (k-1)->first<=r)
		{
			
			if((k-1)->first>=l && k->first>r)
			if((k-1)->first<=r)
			c+=r-(k-1)->first+1-1;
			else if((k-1)->first>=l && k->first<=r)
			c+=k->first-(k-1)->first+1-1;
			else if((k-1)->first<l && k->first>r)
			c+=r-l+1-1;
			else if((k-1)->first<l && k->first<=r)
			c+=k->first-l+1-1;
			
		}
		//c+= k->first - (k-1)->first;
	}			

	cout<<c+1<<endl;

    return 0;
}


