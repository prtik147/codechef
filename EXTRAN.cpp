/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define take(n,a)                   forall(i,0,n)cin>>a[i]
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n,i;
    	cin>>n;
    	int a[n];
    	take(n,a);
    	sort(a,a+n);
    	//bool flag=false;
    	if((a[1]-a[0])>=2)
    		{
    			cout<<a[0]<<endl;
    			continue;
    		}
    	else if((a[n-1]-a[n-2])>=2)
    		{
    			cout<<a[n-1]<<endl;
    			continue;
    		}
    	forall(i,0,n-1)
    	{
    		if(a[i]==a[i+1]){
    			cout<<a[i]<<endl;
    			break;
    		}
    	}

    }
    return 0;
}