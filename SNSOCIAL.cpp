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
    	int n,m,i,e;
    	cin>>n>>m;
    	//cout<<n<<" "<<m<<endl;
    	int a[n][m];
    	e=n*m;
    	//val(n);
    	//val(m);
       	fi(i,0,n)
    	fi(j,0,m)
    	cin>>a[i][j];

    	int c=0,max=0,mxc=0;
    	fi(i,0,n)
    	fi(j,0,m)
    	if(a[i][j]>max)
    		max=a[i][j];

//val(max);
    	fi(i,0,n)
    	fi(j,0,m)
    	if(a[i][j]==max)
    		mxc++;

//val(mxc);
//val(e);
    	int s=0;
    	while(mxc<e)
    	{
    		s++;
    		//val(s);
    		vpii v;
    		fi(i,0,n)
    		{
    			fi(j,0,m)
    			{
    				if(a[i][j]==max)
    				{
    				//	cout<<"max "<<i<<" "<<j<<endl;
    					if((i-1)>=0 && (j-1)>=0)
    					{
    						if(a[i-1][j-1]!=max)
    						{
    							v.pb(mp(i-1,j-1));
    							//a[i-1][j-1]=max;
    							//mxc++;
    							//cout<<i-1<<" "<<j-1<<endl;
    						}
    					}
    					if((i-1)>=0)
    					{
    						if(a[i-1][j]!=max)
    						{
    							v.pb(mp(i-1,j));
    							//a[i-1][j]=max;
    							//mxc++;
    							//cout<<i-1<<" "<<j<<endl;
    						}
    					}
    					if((i-1)>=0 && (j+1)<m)
    					{
    						if(a[i-1][j+1]!=max)
    						{
    							v.pb(mp(i-1,j+1));
    							//a[i-1][j+1]=max;
    							//mxc++;
    							//cout<<i-1<<" "<<j+1<<endl;
    						}
    					}
    					if((j+1)<m)
    					{
    						if(a[i][j+1]!=max)
    						{
    							v.pb(mp(i,j+1));
    							//a[i][j+1]=max;
    							//mxc++;
    							//cout<<i<<" "<<j+1<<endl;
    						}
    					}
    					if((j-1)>=0)
    					{
    						if(a[i][j-1]!=max)
    						{
    							v.pb(mp(i,j-1));
    							//a[i][j-1]=max;
    							//mxc++;
    							//cout<<i<<" "<<j-1<<endl;
    						}
    					}
    					if((i+1)<n && (j-1)>=0)
    					{
    						if(a[i+1][j-1]!=max)
    						{
    							v.pb(mp(i+1,j-1));
    							//a[i+1][j-1]=max;
    							//mxc++;
    							//cout<<i+1<<" "<<j-1<<endl;
    						}
    					}
    					if((i+1)<n)
    					{
    						if(a[i+1][j]!=max)
    						{
    							v.pb(mp(i+1,j));
    							//a[i+1][j]=max;
    							//mxc++;
    							//cout<<i+1<<" "<<j<<endl;
    						}
    					}
    					if((i+1)<n && (j+1)<m)
    					{
    						if(a[i+1][j+1]!=max)
    						{
    							v.pb(mp(i+1,j+1));
    							//a[i+1][j+1]=max;
    							//mxc++;
    							//cout<<i+1<<" "<<j+1<<endl;
    						}
    					}
    				}
    			}
    		}
    		//val(mxc);
    		vpii::iterator it=v.begin();
    		for(;it!=v.end();it++)
    		{
    			if(a[it->fr][it->se] != max)
    			{
    				a[it->fr][it->se]=max;
    				mxc++;	
    			}
    		}
  //  		val(mxc);
    	}
    	cout<<s<<endl;
    }
    return 0;
}