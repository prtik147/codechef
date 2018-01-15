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
 
 bool cmp(int i,int j)
{
    return (j<i);
}
int main() 
{
	ios::sync_with_stdio(false);
	int n,i,j;
    cin>>n;
    int a[n][n];
    ll sum[n][2],sn=0,s=0;
    forall(i,0,n)
    {
        s=0;
        sn=0;
        forall(j,0,n)
    	{
            cin>>a[i][j];
            sn+=a[i][j];
            if(j<(n/2))
                s+=a[i][j];
        }
        sum[i][0]=s;
        sum[i][1]=sn;
    }
    forall(i,0,n)
    {
        if(2*sum[i][0]>sum[i][1])
        sort(a[i],a[i]+n);
        else
        sort(a[i],a[i]+n,cmp);
    }
 
    forall(i,0,n)
    {
    	forall(j,0,n)
    	{
    		cout<<a[i][j]<<" ";
    	}
    	nl;
    }
 
    return 0;
} 