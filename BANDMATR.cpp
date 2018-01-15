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
#define print(n,a)                  forall(i,0,n)cout<<a[i]<<" "
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
    	int n,i,j;
    	cin>>n;
    	//int a[n][n];
    	ll one=0;
    	forall(i,0,n)
    	{
    		forall(j,0,n)
    	    	{
    	    		//cin>>a[i][j];
    	    		int num;
    	    		cin>>num;
    	    		if(num==1)
    	    			one++;
    	    	}
    	}
    	if(one==(n*n))
    	{
    		cout<<n-1<<endl;
    		continue;
    	}
    	int b=0;
    	one-=n;
    	while(one>0)
    	{
    		n--;
    		one-=(2*n);
    		b++;
    	}
    	//cout<<"hdk"<<endl;
    	cout<<b<<endl;
    }
    return 0;
}