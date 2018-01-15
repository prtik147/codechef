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
#include <cstdio>
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

int a[1000000]={0};
ll coins(ll n)
{
	if(n<1000000 && a[n]!=0)
		return a[n];
	if(n/2+n/3+n/4<=n)
		{
			return n;
		}
	else
		{
			ll ans=coins(n/2)+coins(n/3)+coins(n/4);
			if(ans<1000000)
				a[n]=ans;
			return ans;
		}
}
int main() 
{
	ios::sync_with_stdio(false);
	ll n;
	while((scanf("%lld",&n))==1)
	{
		ll x=coins(n);
		cout<<x<<endl;
	}
    return 0;
}