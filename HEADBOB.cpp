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
    	int n,i,N=0,Y=0,I=0;
    	cin>>n;
    	char a[n];
    	forall(i,0,n)
    	{
    		cin>>a[i];
    		if(a[i]=='Y')
    			Y++;
    		else if(a[i]=='I')
    			I++;
    		else
    			N++;
    	}
    	if(Y==0 && I==0)
    		cout<<"NOT SURE"<<endl;
    	else if(I>0 && Y>0)
    		cout<<"NOT SURE"<<endl;
    	else if(I>0)
    		cout<<"INDIAN"<<endl;
    	else if(Y>0)
    		cout<<"NOT INDIAN"<<endl;

    }
    return 0;
}