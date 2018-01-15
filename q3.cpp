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
    	string s;
    	cin>>s;
    	fi(i,0,s.length())
    	{
    		if(s[i]>=97)
    		{
    			s[i]-=32;
    			if(s[i]+i+1>90)
    			{
    				int d=s[i]+i-90;
    				s[i]=65+d%26;
    			}
    			else
    			{
    				s[i]=s[i]+i+1;
    			}
    			cout<<s[i];
    		}
    		else
    		{
    			s[i]+=32;
    			if(s[i]+i+1>122)
    			{
    				int d=s[i]+i-122;
    				s[i]=97+d%26;
    			}
    			else
    			{
    				s[i]=s[i]+i+1;
    			}

    			cout<<s[i];	
    		}
    	}
    	nl;
    }
    return 0;
}
