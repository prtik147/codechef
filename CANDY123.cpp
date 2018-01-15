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
    	int a,b,i,l=0,bo=0;
    	cin>>a>>b;
    	for(i=1;;i++)
    	{
    		if(i%2==0)
    			bo+=i;
    		else
    			l+=i;
    		if(bo>b)
    		{
    			cout<<"Limak"<<endl;
    			break;
    		}
    		if(l>a)
    		{
    			cout<<"Bob"<<endl;
    			break;
    		}

    	}
    }
    return 0;
}