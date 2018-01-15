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
    	int n,k1,i;
    	cin>>n>>k1;
    	int a[n],h[n],o[n],k=0,l=0;
    	forall(i,0,n)
    	cin>>a[i];
    	vpii v;
    	for(i=0;i<n;i++)
    	{
    		int m=a[i],num=0,j=0;
    		while(m)
    		{
    			num+=(m%10)*pow(8,j);
    			m/=10;
    			j++;
    		}
    		o[l]=num;
    		l++;
    		v.pb(num);
    		num=0;
    		j=0;
    		m=a[i];
    		while(m)
    		{
    			num+=(m%10)*pow(16,j);
    			m/=10;
    			j++;
    		}
    		h[k]=num;
    		k++;
    		v.pb(num);
    	}
    	sort(all(v));
    	int x=v[k1-1],f=0;
    	for(i=0;i<n;i++)
    	{
    		if(o[i]==x)
    			{
    				f=1;
    				break;
    			}
    	}
    	if(f==1)
    	{
    		while(x>7)
    		{
    			cout<<x%8;
    			x/=8;
    		}
    		cout<<x<<" "<<8<<endl;
    	}
    	else
    	{
    		while(x>15)
    		{
    			cout<<x%16;
    			x/=16;
    		}
    		cout<<x<<" "<<16<<endl;
    	}


    }
    return 0;
}