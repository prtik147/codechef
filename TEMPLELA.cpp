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
    	int n,a=0,b=0,c=0,d=0,e=0,i;
    	cin>>n;
    	int arr[n];
    	fi(i,0,n)
    	cin>>arr[i];
    	if(n%2!=0)
    		a=1;
    	int m=n/2;
    	//val(m);
    	//val(n);
    	for(i=0;i<m;i++)
    	{
    		//cout<<arr[i]<<" "<<arr[i+1];
    		if(arr[i+1] != (arr[i]+1))
    	   	break;
    	   	//val(i);
    	}
    	//prs(arr,n);
    	//cout<<i<<endl;
    	if(i==m)
    		c=1;

    	if(arr[0]==1)
    		b=1;
    	
    	f(i,m,n-1)
    	{
    		if(arr[i]!=(arr[i+1]+1))
    	    {
    	    //	cout<<arr[i]<<" "<<arr[i+1];
    	   		break;
    	   	}
    	}

    	if(i==(n-1))
    		d=1;
    	
    	//cout<<"fsfd"<<endl;
    	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    	if(a==1 && b==1 && c==1 && d==1)
    		cout<<"yes"<<endl;
    	else
    		cout<<"no"<<endl;
    }
    return 0;
}