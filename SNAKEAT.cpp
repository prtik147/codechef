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
    	int n,q;
    	cin>>n>>q;
    	int a[n];
    	take(a,n);
    	while(q--)
    	{
    		int num,ans=0;
    		cin>>num;
    		int n2=0,n1=0;
    		fi(i,0,n)
    		{
    			if(a[i]==(num-1))
    				n1++;
    			if(a[i]==(num-2))
    				n2++;
    			if(a[i]>=num)
    				ans++;
    		}	
    		if(n1!=0 && n2!=0)
    				ans++;
    			else if(n1>=2)
    				ans++;
    		cout<<ans<<endl;
    	}
    	
    }
    return 0;
}