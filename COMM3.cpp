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
    	int d,c=0;
    	cin>>d;
    	int a1,a2,a3,a4,a5,a6;
    	cin>>a1>>a2>>a3>>a4>>a5>>a6;
    	if(sqrt((a3-a1)*(a3-a1)+(a4-a2)*(a4-a2))<=d)
    		c++;
    	if(sqrt((a5-a3)*(a5-a3)+(a6-a4)*(a6-a4))<=d)
    		c++;
    	if(sqrt((a5-a1)*(a5-a1)+(a6-a2)*(a6-a2))<=d)
    		c++;

    	if(c>=2)
    		cout<<"yes";
    	else
    		cout<<"no";
    	nl;
    }
    return 0;
}