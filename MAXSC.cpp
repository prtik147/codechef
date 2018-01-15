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
    	int n;
    	cin>>n;
    	int a[n][n];
    	fi(i,0,n)
    	fi(j,0,n)
    	cin>>a[i][j];

    	int mx=0,mx1=0,i,j;
    	ll s=0,f=0;
    	if(n==1)
    	{
    		cout<<a[0][0]<<endl;
    		continue;
    	}
    	fi(j,0,n)
    	{
    		if(a[n-1][j]>=mx)
    			mx=a[n-1][j];
    	}
    	s+=mx;
    	//val(mx);
    	fd(i,n-2,0)
    	{
    		f=0;
    		fi(j,0,n)
    		{
    			if(a[i][j]>=mx1 && a[i][j]<mx)
    			{
    				mx1=a[i][j];
    				f=1;
    				//val(mx1);
    			}
    		}
    		s+=mx1;
    		mx=mx1;
    		mx1=0;
    		if(f==0)
    			break;
    	}
    	if(f==0)
    		cout<<"-1"<<endl;
     	else
    		cout<<s<<endl;
    }
    return 0;
}
