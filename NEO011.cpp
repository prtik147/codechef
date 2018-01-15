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
    	ll n;
    	cin>>n;
    	int a[n];
    	ll c=0,ans=0,ans2=0;
    	fi(i,0,n)
    	cin>>a[i];

    	sort(a,a+n);
    	//prs(a,n);

    	fi(i,0,n)
    	{
    		if(a[i]>=0)
    			{ans+=a[i];
    				c++;}
    	}
    	//ans=ans*c;
    	fd(i,n-1,0)
    	{
    		if(a[i]<0)
    		{
    			if((ans+a[i])*(c+1)>ans*c)
    			{
    				c++;
    				ans+=a[i];
    			}
    			else
    			{
    				ans2+=a[i];
    			}
    		}
    	}
    	ans*=c;
    	cout<<ans+ans2<<endl;
    }
    return 0;
}