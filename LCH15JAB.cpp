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
#define take(n,a)                   forall(int i,0,n)cin>>a[i]
#define print(n,a)                  forall(int i,0,n)cout<<a[i]<<" "
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
    	string s;
    	cin>>s;
    	int a[26]={0},i,mx=0,sum=0;
    	forall(i,0,s.size())
    	a[s[i]-97]++;
    	forall(i,0,26)
    	{
    		sum+=a[i];
    		if(a[i]>mx)
    			mx=a[i];
    	}
    	if(sum==2*mx)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;

    }
    return 0;
}