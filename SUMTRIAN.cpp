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
    int a[103][103]={0};
    while(t--)
    {
    	int n,i,j;
    	cin>>n;
    	forall(i,1,n+1)
    	forall(j,1,i+1)
    	cin>>a[i][j];

    	for(i=n;i>1;i--)
    	{
    		for(j=1;j<i;j++)
    		a[i-1][j]=MAX(a[i][j],a[i][j+1])+a[i-1][j];
    	}
    	cout<<a[1][1]<<endl;
    }
    return 0;
}