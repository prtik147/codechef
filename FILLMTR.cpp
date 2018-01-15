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
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)
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
    	int n,q;
    	cin>>n>>q;
    	int a[n+1]={0};
    	map<pair<int,int>,int> m;
    	vector<pair<pair<int,int>,int> > v;
    	bool f=false;
    	while(q--)
    	{
    		int i,j,va;
    		cin>>i>>j>>va;
    		if((m[mp(i,j)]==5 && va==0)||((m[mp(i,j)]==4 && va==1)))
    		{
    			f=true;
    			break;
			}
			if(va!=0)
    		{
    			m[mp(i,j)]=m[mp(j,i)]=5;
    			if(a[i]==0 && a[j]==0)
    			{
    				v.pb(mp(mp(i,j),va));
				}
    			else if(a[i]==0 && a[j]==4)
    				a[i]=5;
				else if(a[i]==0 && a[j]==5)
    				a[i]=4;
    			else if(a[i]==4 && a[j]==0)
    				a[j]=5;
    			else if(a[i]==5 && a[j]==0)
    				a[j]=4;
    			else if(a[i]==a[j])
    			{
    				f=true;
    				break;
				}
			}
    		else
    		{
    			m[mp(i,j)]=m[mp(j,i)]=4;
    			/*if(a[i]!=a[j])
    			{
    				f=true;
    				break;
				}
				if(a[i]==4 || a[j]==4)
					a[i]=a[j]=4;*/
				
    			if(a[i]==0 && a[j]==4)
    				a[i]=4;
				else if(a[i]==0 && a[j]==5)
    				a[i]=5;
    			else if(a[i]==4 && a[j]==0)
    				a[j]=4;
    			else if(a[i]==5 && a[j]==0)
    				a[j]=5;
    			else if(a[i]!=a[j])
    			{
    				f=true;
    				break;
				}
				else if(a[i]==0 && a[j]==0)
    			{
    				///***///
    				v.pb(mp(mp(i,j),va));
				}
			}
    		//m.at[{i,j}]=va;
    		//cout<<m[mp(i,j)]<<" "<<m[mp(j,i)]<<endl;
		}
		if(f==true)
		cout<<"no"<<endl;
		vector<pair<pair<int,int>,int> >::iterator it;
		
    }
    return 0;
}

