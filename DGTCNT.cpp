/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
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
#define fi first
#define se second
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
    	ll l,r,i,n,ans=0;
    	n=l;
    	cin>>l>>r;
    	int a[10];
    	forall(i,0,10)
    	cin>>a[i];
    	int c[10]={0},m,j;
    	//for(int k=0;k<10;k++)
    	//		cout<<c[k]<<" ";
    	//	nl;
    		n=l;
    	while(n)
    	{
    		m=n%10;
    		c[m]++;
    		n/=10;
    	}
    	//for(int k=0;k<10;k++)
    	//		cout<<c[k]<<" ";
    	//	nl;
    	int f=0;
    	forall(i,l+1,r+1)
    	{
    		forall(j,0,10)
    		{
    			if(a[j]==c[j])
    			{
    				f=1;
    				break;
    			}
    		}
    		//for(int k=0;k<10;k++)
    		//	cout<<c[k]<<" ";
    		//nl;
    		if(f==1)
    			f=0;
    		else
    			ans++;
    		n=i;
    		if(n%10==0)
    		{
    			for(int p=0;p<10;p++)
    				c[p]=0;
    			while(n)
    			{
    				m=n%10;
    				c[m]++;
    				n/=10;
    			}
    		}
    		else
    		{
    			m=n%10;
    			c[m-1]--;
   	    		c[m]++;	
    		}
    		/*while(n%10==0)
    		{
    			c[9]--;
    			c[0]++;
    			n/=10;
    		}
    		if(n==0)
    			{
    				c[1]++;
    			//	cout<<i<<" ";
    			//for(int k=0;k<10;k++)
    			//cout<<c[k]<<" ";
    		    //nl;
    		}
    		else
    		{
    			m=n%10;
    			c[m-1]--;
   	    		c[m]++;
 		   	}*/

    	}
    	forall(j,0,10)
    		{
    			if(a[j]==c[j])
    			{
    				f=1;
    				break;
    			}
    		}
    		if(f==1)
    			f=0;
    		else
    			ans++;
    		cout<<ans<<endl;
    }
    return 0;
}