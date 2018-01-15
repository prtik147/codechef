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
    	int n,i,f=0;
    	cin>>n;
    	string s[n];
    	forall(i,0,n)
    	cin>>s[i];
    	if(s[n-1][0]=='c')
    		{
    			cout<<"NO"<<endl;
    			continue;
    		}
    	if(n==1)
    	{
    		if(s[0][0]=='c')
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;
    	}
    	else
    	{
    		forall(i,0,n-1)
			{
				if(s[i][0]=='c'&& s[i+1][0]=='c')
    			{
    			f=1;
    			//break;
    			}
    		}
    		if(f==1)
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;
		}    	
    }
    return 0;
}