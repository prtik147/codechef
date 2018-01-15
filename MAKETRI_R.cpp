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

#define fi first
#define se second
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
 	long long n,l,r,mn,mx;
	cin>>n>>l>>r;
	long long a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];

	cout<<"array"<<endl;
	forall(i,0,n)
	cout<<a[i]<<" ";
	cout<<endl;
	sort(a,a+n);

	cout<<"sorted array"<<endl;
	forall(i,0,n)
	cout<<a[i]<<" ";
	cout<<endl;

	vector<pair<ll, ll> > vp;
	forall(i,0,n-1)
	vp.pb(mp(a[i+1]-a[i]+1,a[i+1]+a[i]-1));

	vector<pair<ll,ll> >::iterator k4;
	cout<<"pb"<<endl;
	for(k4=vp.begin();k4!=vp.end();k4++)
	cout<<k4->fi<<" "<<k4->se<<" ";
	cout<<endl;

	sort(vp.begin(),vp.end());
	vector<pair<ll,ll> >::iterator k;
	vector<pair<ll,ll> >::iterator k2;
	ll c=0;

	cout<<"start point"<<endl;
	for(k4=vp.begin();k4!=vp.end();k4++)
	cout<<k4->fi<<" "<<k4->se<<" ";
	cout<<endl;
	/*k=vp.begin();
	if(k->second==0)
	{
		if(k->first>l)
			c+=k->first-l;
		cur++;
	}
	k++;*/
	vector<pair<ll, ll> > v2;
	k=vp.begin();
	v2.pb(mp(k->fi,k->se));
	k++;
	k2=v2.begin();

	for(k;k!=vp.end();k++)
	{
		if(k->fi <= k2->se)
		{
			k2->se=MAX(k->se,k2->se);
		}
		else
		{
			v2.pb(mp(k->fi,k->se));
			k2++;
		}
	}
	cout<<"merge"<<endl;
	for(k4=v2.begin();k4!=v2.end();k4++)
	cout<<k4->fi<<" "<<k4->se<<" ";
	cout<<endl;			


	vector<pair<ll, ll> > v3;
	vector<pair<ll,ll> >::iterator k3;

	for(k2=v2.begin();(k2+1)!=v2.end();k2++)
		v3.pb(mp(k2->se+1,(k2+1)->fi-1));

	cout<<"rej"<<endl;
	for(k4=v3.begin();k4!=v3.end();k4++)
	cout<<k4->fi<<" "<<k4->se<<" ";
	cout<<endl;

	k2=v2.begin();
	mn=k2->fi;
	mx=a[n-1]+a[n-2]-1;

	if(l<mn)
		c+=(mn-l);
	if(r>mx)
		c+=(r-mx);

	for(k3=v3.begin();k3!=v3.end();k3++)
	{
			if(k3->fi>k3->se);
			else if(k3->fi<l&&k3->se<l);
			else if(k3->fi>r&&k3->se>r);
			else if(k3->fi>=l && k3->se>r)
			c+=r-k3->fi+1;
			else if(k3->fi>=l && k3->se<=r)
			c+=k3->se-k3->fi+1;
			else if(k3->fi<l && k3->se>r)
			c+=r-l+1;
			else if(k3->fi<l && k3->se<=r)
			c+=k3->se-l+1;
	}
	//cout<<mx-c-mn+1<<endl;
	//cout<<l<<" "<<r<<" "<<c<<endl;
	cout<<MAX(r-l+1-c,0)<<endl;
    return 0;
}
/*if(k3->fi>=l && k3->se>r)
			c+=r-k3->fi+1;
			else if(k3->fi>=l && k3->se<=r)
			c+=k3->se-k3->fi+1;
			else if(k3->fi<l && k3->se>r)
			c+=r-l+1;
			else if(k3->fi<l && k3->se<=r)
			c+=k3->se-l+1;*/

