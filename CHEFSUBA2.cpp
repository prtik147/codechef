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
	int n,k,p,i,cnt=0,c=0;
	cin>>n>>k>>p;
	int a[n],one[n];
	take(a,n);
	int p1,p2;
	vector < pair<int, pair<int,int> > > v;
	vector <pair<int, pair<int,int> > >::iterator it;
	if(k<=n)
	{fin(i,0,k)
		{
			if(a[i]==1)
				{c++;
					cnt++;}
					one[i]=c;
		}}
	v.pb(mp((c),mp(0,k-1)));
	fin(i,0,n-1)
	{
		if(a[i]==1)
			c--;
		if(a[(i+k)%n]==1)
			c++;
		v.pb(mp((c),mp(i+1,((i+k)%n))));
	}
	//for(it=v.begin();it!=v.end();it++)
	//	cout<<it->fi<<" "<<it->se.fi<<" "<<it->se.se<<endl;
	sort(v.rbegin(),v.rend());
	int pos=0;
	while(p--)
	{
		ch c;
		cin>>c;
		if(c=='!')
		{pos++;
		pos=pos%n;}
		else
		{
			if(k>n)
				cout<<cnt<<endl;
			else
			{
				set<int> s;
				set<int>::iterator it1;
				//s.insert(0);
				for(it=v.begin();it!=v.end;it++)
				{
					if(pos<it->se.fi && pos<it->se.se)
					{
						if(it->se.fi > it->se.se)
						{		
							int c1=0,c2=0;					
							fin(i,it->se.fi,pos+1)
							{
								i%=n;
								if(a[i])
							}
						}
					}
				}
			}
		}
	}
    return 0;
}