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
    	ull a[21]={1,	1,	2,	6,	24,	120,	720,	5040,	40320,	362880,	3628800,	39916800,	479001600,	6227020800,	87178291200,	1307674368000,	20922789888000,	355687428096000,	6402373705728000,	121645100408832000,	2432902008176640000};
    	cout<<a[n]<<endl;
    }
    return 0;
}
//1,	1,	2,	6,	24,	120,	720,	5040,	40320,	362880,	3628800,	39916800,	479001600,	6227020800,	87178291200,	1307674368000,	20922789888000,	355687428096000,	6402373705728000,	121645100408832000,	2432902008176640000