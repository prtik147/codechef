/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <string>
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
    	string s1[4],s2[4];
    	int i,j,c=0;
    	forall(i,0,4)
    	cin>>s1[i];
    	forall(i,0,4)
    	cin>>s2[i];
    	forall(i,0,4)
    	{forall(j,0,4)
    	    	{
    	    		if(s1[i]==s2[j])
    	    			c++;
    	    		if(c==2)
    	    			break;
    	    	}
    	    	if(c==2)
    	    		break;
    	    }
    	    (c>=2)? cout<<"similar":cout<<"dissimilar";
    	    nl;
    }
    return 0;
}