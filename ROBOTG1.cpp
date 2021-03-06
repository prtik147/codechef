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
    	int n,m,i,flag=0;
    	cin>>n>>m;
    	string s;
    	cin>>s;
    	int l=0;
    	int u=0;
        int mxr=0,mxc=0,mnr=0,mnc=0;
    	for(i=0;i<s.length();i++)
    	{
    		if(s[i]=='L')
    			l++;
    		if(s[i]=='R')
    			l--;
    		if(s[i]=='U')
    			u++;
    		if(s[i]=='D')
    			u--;
    		mxr = MAX(mxr,u);
            mnr = MIN(mnr,u);
            mxc = MAX(mxc,l);
            mnc = MIN(mnc,l);
    	}
    	if((mxr-mnr)>=n|| (mxc-mnc)>=m)
            cout<<"unsafe"<<endl;
        else
            cout<<"safe"<<endl;
    }
    return 0;
}