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
#include <string>
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
    	ll n,k,i,ans=0,c1=0,c2=0,num=0;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	int f1=0,f2=0;
    	forall(i,0,n)
    	{
    		if(s[i]=='a')
    		c1++;
    		if(s[i]=='b')
    		c2++;
    	}
    	for(i=n-1;i>=0;i--)
    	{
    		if(s[i]=='b')
    			f1++;
    		if(s[i]=='a')
    		{
    			num+=(f1);
    		}
    	}

    	ll c=0;
    	c=num*k;
    	ans+=c;
    	ll r=k*(k-1)*c1*c2/2;
    	ans+=r;
    	//cout<<r<<" "<<c;
    	//nl;
    	cout<<ans<<endl;

    }
    return 0;
}