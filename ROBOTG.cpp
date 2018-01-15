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
    	int l=0,r=0;
    	int u=0,d=0;
    	for(i=0;i<s.length();i++)
    	{
    		if(s[i]=='L')
    			l++;
    		if(s[i]=='R')
    			r++;
    		if(s[i]=='U')
    			u++;
    		if(s[i]=='D')
    			d++;
    		if(abs(l-r)>=m)
    		{
    			flag=1;
    			break;
    		}
    		if(abs(u-d)>=n)
    		{
    			flag=1;
    			break;
    		}
    	}
    	if(flag==1)
    		cout<<"unsafe"<<endl;
    	else
    		cout<<"safe"<<endl;
    }
    return 0;
}