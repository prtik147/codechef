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
    	int n;
    	cin>>n;
    	if(n%2==0)
    		n-=2;
    	else
    		n-=3;
    	if(n<0)
    	{
    		cout<<"0"<<endl;
    		continue;
    	}
    	n/=2;
    	ll ans=n*(n+1)/2;
    	cout<<ans<<endl;
    }
    return 0;
}