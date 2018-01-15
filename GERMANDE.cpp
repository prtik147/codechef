/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
//15118050               //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sll(n)                      scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))

#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int o1,o2,n,o=0;
    	cin>>o1>>o2;
    	n=o1*o2;
    	int a[n],one[n+o2];
    	one[0]=0;
    	forall(i,0,n)
    	{
    		cin>>a[i];
    		if(a[i]==1)
			{
				o++;
				one[i+1]=o;
			}
			else
			one[i+1]=o;
    	}
    	forall(i,0,o2)
    	{
    		one[n+i+1]=one[i+1]+one[n-1];
    	}
    	//forall(i,0,n+o2)
    	//cout<<one[i]<<" \n"[i==n+o2-1];

    	int mx=0,mxcur=0;
    	for(int j=0;j<o2;j++)
    	{
    		mxcur=0;
    		int k=0;
    		for(int i=j;k<o1;i+=o2,k++)
    		{
    			if((one[i+o2]-one[i])>(o2/2))
    			{
    				mxcur++;
    				
    			}
    		//	cout<<j<<" "<<i+o2<<" "<<i<<" "<<(o2/2)<<endl;
    		}
    		if(mxcur>mx)
    			mx=mxcur;
    		//cout<<"mx "<<mx<<endl;
    	}
    	if(mx>(o1/2))
    		cout<<"1"<<endl;
    	else
    		cout<<"0"<<endl;
    }
    return 0;
}


