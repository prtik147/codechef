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
	int n,m,i;
	cin>>n>>m;
	vi v;
	vi ::iterator k;
	forall(i,0,n)
	{
		int num;
		cin>>num;
		v.pb(num);
	}
	vector<pair<int,string> > vf,vn;
	while(m--)
	{
		int f,p,flag=0;
		string s;
		cin>>f>>p>>s;
		for(k=v.begin();k!=v.end();k++){
			if(*k==f)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
				vn.pb(mp(p,s));	
			else
				{
					vf.pb(mp(p,s));
					flag=0;
				}
	}

	sort(vf.rbegin(),vf.rend());
			sort(vn.rbegin(),vn.rend());
			vector<pair<int,string> >::iterator k1;
			for(k1=vf.begin();k1!=vf.end();k1++)
			cout<<k1->se<<endl;
			for(k1=vn.begin();k1!=vn.end();k1++)
			cout<<k1->se<<endl;

    return 0;
}