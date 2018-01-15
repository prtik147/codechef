//Hi...
//What's up!
//How is your day??
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
    	int n;
    	cin>>n;
    	int a[2*n];
    	take(a,2*n);
    	sort(a,a+2*n);
    	int ans=a[2*n-1-n/2];
    	cout<<ans<<endl;
    	fi(i,0,n)
    	{
    		cout<<a[i]<<" "<<a[2*n-1-i]<<" ";
    	}
    	nl;
    }
    return 0;
}
//thank you for watching...