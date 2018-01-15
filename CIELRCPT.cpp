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
    	int n,i=0,c=0;
    	int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    	cin>>n;
    	while(n)
    	{
    		if(n>=2048)
    		{
    			c+=(n/2048);
    			n-=(c*2048);
    		}
    		else
    		{
    			while(n/a[i] != 1)
    			i++;
    			c+=(n/a[i]);
    			n-=a[i];
    			i=0;
    		}
    	}
    	cout<<c<<endl;
    }
    return 0;
}