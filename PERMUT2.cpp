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
    while(1)
    {
    	int t;
    	cin>>t;
    	if(t==0)
    		break;

    	int a[t+1],i;
    	forall(i,1,t+1)
    	cin>>a[i];
    	int c=0;
    	forall(i,1,t+1)
    	{
    		if(i==a[a[i]])
    			c++;
    	}
    	if(c!=t)
    		cout<<"not ambiguous"<<endl;
    	else
    		cout<<"ambiguous"<<endl;
    }
    return 0;
}