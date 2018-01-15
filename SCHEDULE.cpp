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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
	cin>>n>>k;
	string a;
	//forall(i,1,n+1)
	cin>>a;
	vector<pair<int , pair<int ,int> > > v(n);
	vector<pair<int , pair<int ,int> > >::iterator it;
	it=v.begin();
	if(a[0]=='0')
		it->fi=0;
	else
		it->fi=1;
	it->se.fi=0;
	i=1;
	while(a[i+1]!='\0')
	{
		if(a[i]!=a[i+1])
		{
			it->se.se=i;
			it++;
			if(a[i+1]=='0') 
			it->fi=0; 
			else
			 it->fi=1;
			it->se.fi=i+1;
		}
		i++;
	}
	it->se.se=n-1;
	/*for(it=v.begin();it!=v.end();it++)
	{
		cout<<it->fi<<" "<<it->se.fi<<" "<<it->se.se<<endl;
	}*/
	while(k--)
	{
		
	}


	}
	return 0;
}