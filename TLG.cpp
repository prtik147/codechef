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
	int n,i;
	cin>>n;
	int a[n],b[n],l[n],md[n],mx=0,w;
	forall(i,0,n)
	{
		cin>>a[i]>>b[i];
		mx+=a[i]-b[i];
		l[i]=mx;
		if(mx>0)
			md[i]=l[i];
		else
			md[i]=-1*l[i];
	}
	in=0,max=0;
	forall(i,0,n)
	{
		if(md[i]>max)
			{max=md[i];
				in=i;}
	}

	cout<<in<<" "<<max<<endl;

    return 0;
}