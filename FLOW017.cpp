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
    	int a,b,c;
    	cin>>a>>b>>c;
    	int c1=0,c2=0,c3=0;
    	if(a>b)
    		c1++;
    	else
    		c2++;
    	if(b>c)
    		c2++;
    	else
    		c3++;
    	if(a>c)
    		c1++;
    	else
    		c3++;
    	if(c1==1)
    		cout<<a<<endl;
    	else if(c2==1)
    		cout<<b<<endl;
    	else
    		cout<<c<<endl;
    }
    return 0;
}