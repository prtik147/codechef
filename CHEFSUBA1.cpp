#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define val(x)                  cout<<#x<<" "<<x<<endl;
#define fin(i,a,b)               for(int i=a;i<b;i++)
#define fde(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fin(i,0,n)cin>>a[i]
#define prs(a,n)                  fin(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fin(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "

int main() 
{
	ios::sync_with_stdio(false);
	int n,k,p,i,f1=0;
	cin>>n>>k>>p;
	int a[n],ans[n];
	take(a,n);
	int p1,p2;
	vector < pair<int, pair<int,int> > > v;
	vector <pair<int, pair<int,int> > >::iterator it;
	fin(i,0,n)
	{
		if(a[i]==1)
		{
			if(f1==0)
			{
				f1=1;
				p1=i;
			}
		}
		else if(a[i]==0)
		{
			if(f1==1)
			{
				p2=i;
				v.pb(mp((p2-p1),mp(p1,p2-1)));
				f1=0;
			}
		}
	}
	if(a[n-1]==1 && a[0]==1)
	{
		v[0].fi+=(n-p1);
		v[0].se.fi=p1;
	}
	if(a[n-1]==1 && a[0]==0)
	{
		v.pb(mp((n-p1),mp(p1,n-1)));
	}
	//for(it=v.begin();it!=v.end();it++)
	//	cout<<it->fi<<" "<<it->se.fi<<" "<<it->se.se<<endl;
	v.pb(mp((0),mp(0,0)));
	v.pb(mp((0),mp(0,0)));
	sort(v.rbegin(),v.rend());

    return 0;
}