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
#define f(i,a,b)               for(i=a;i<b;i++)
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
    	string s;
    	cin>>s;
    		int i;
    		f(i,0,s.length()-1)
    		{
    			if(s[i]=='E' && s[i+1]=='C')
    				{cout<<"no"<<endl;
    			break;}
    			else if(s[i]=='S' && s[i+1]=='E')
    				{cout<<"no"<<endl;
    			break;}
    			else if(s[i]=='S' && s[i+1]=='C')
    				{cout<<"no"<<endl;
    			break;}
    		}
    		if(i==s.length()-1)
    			cout<<"yes"<<endl;
    }
    return 0;
}