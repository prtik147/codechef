#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define val(x)                  cout<<#x<<" "<<x<<endl;
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
    	int l,c1=0,i,in,h=0,t=0;
    	
    	cin>>l;
    	char s[l];
    	cin>>s;

    	for(i=0;i<l;i++)
    	{
    		if(s[i]=='H')
    			{
    				h++;
                    c1=1;
    			}
    		if(s[i]=='T')
    		{
    			t++;
    			if(c1==1)
    				c1=0;
    			else
    			break;
    		}
    	}
    	if(h==t)
    		in=1;
    	else
    		in=0;
    	
    		if(in==1 && i==l)
    		cout<<"Valid"<<endl;
    		else
    		cout<<"Invalid"<<endl;
    }
    return 0;
}