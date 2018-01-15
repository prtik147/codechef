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

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
//euclid algorithm
//source codemonk
int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n],i,g;
    	forall(i,0,n)
    	cin>>a[i];

    	if(n==1)
    		cout<<"1";
    	else
    	{
    		g=GCD(a[0],a[1]);
    	//cout<<g<<endl;
    	forall(i,2,n)
    	g=GCD(g,a[i]);

    	//cout<<g<<endl;
    	forall(i,0,n)
    	cout<<a[i]/g<<" ";
    	}
    	nl;
    }
    return 0;
}