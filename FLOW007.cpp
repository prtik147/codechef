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
    	int n,a[18],i=0;
    	cin>>n;
    	while(n)
    	{
    		//cout<<n<<endl;
    		a[i]=n%10;
    		n/=10;
    		i++;
    	}
    	int flag=0;
    	for(int j=0;j<i;j++)
    	{
    		if(a[j]==0 && flag==0)
    			continue;
    		else{
    			cout<<a[j];
    			flag=1;
    		}

    	}
    	nl;
    }
    return 0;
}