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
#define nl                     cout<<endl
#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[198],cry=0,p=0,i,j;
    	forall(i,0,198)
    	a[i]=1;

    	forall(i,1,n+1)
    	{
    		forall(j,0,p+1)
    		{
    			a[j]=a[j]*i+cry;
    			cry=a[j]/10;
    			a[j]%=10;
    		}
    		while(cry)
    		{
    			p++;
    			a[p]=cry%10;
    			cry/=10;
    		}
    	}
    	for(i=p;i>=0;i--)
    		cout<<a[i];
    	nl;
    }
    return 0;
}