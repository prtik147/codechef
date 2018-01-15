#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <array>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
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
	int t;
    cin>>t;
    while(t--)
    {
    	ll l;
    	string s;
    	cin>>s;
    	l=s.length();
    	int c=0,f1=0,f2=0;
    	if(s[0]=='1')
    		c++;
    	fi(i,0,l)
    	{
    		if(s[i]=='1')
    			{
    				f1=1;
    				if(f2==1)
    				{
    					f2=0;
    					c++;
    				}
    			}
    			else
    			{
    				f2=1;
    				f1=0;
    			}
    		
    	}
    	if(c==1)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}