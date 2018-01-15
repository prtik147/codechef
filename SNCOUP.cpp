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
    	char s[n][2];
    	fi(i,0,n)
    	cin>>s[i][0];
    	fi(i,0,n)
    	cin>>s[i][1];

    	int ans=0;
    	int u=0,d=0;
    	fi(i,0,n)
    	{
    		if(s[i][0]=='*')
    			u=1;
    		if(s[i][1]=='*')
    			d=1;
    	}
    	if(u==1 && d==1)
    		{
    	//		cout<<"yes"<<endl;
    			ans++;}

    	u=0;
    	d=0;
    	//val(ans);
    	fi(i,0,n)
    	{
    		if(s[i][0]=='*' && s[i][1]=='*')
    		{
    			if(u==0 && d==0)
    			{
    				u=1;
    				d=1;
    			}
    			else
    			{
    				u=1;
    				d=1;
    				ans++;
    			}
    		}
    		else if(s[i][0]=='*')
    		{
    			if(u==0)
    				u=1;
    			else
    			{
    				u=1;
    				d=0;
    				ans++;
    			}
    		}
    		else if(s[i][1]=='*')
    		{
    			if(d==0)
    				d=1;
    			else
    			{
    				u=0;
    				d=1;
    				ans++;
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}