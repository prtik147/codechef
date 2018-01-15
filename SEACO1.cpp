#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <utility>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define val(x)                  cout<<#x<<" "<<x<<endl;
#define f(i,a,b)               for(i=a;i<b;i++)
#define fi(i,a,b)               for(ll i=a;i<b;i++)
#define fd(i,n,a)               for(ll i=n;i>=a;i--)
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))
#define pb push_back
#define mp make_pair
typedef vector<ll> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define all(x) x.begin(),x.end()
#define fr                    first
#define se                    second
#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod                   1000000007
#define PI                    3.1415926535897932384626433832795
#define nl            cout<<"\n"
#define spc           cout<<" "
int main()
{
	ios::sync_with_stdio(false);
	ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	ll a[n][2],c=0,arr[m][4];
    	fi(i,0,n)
    	a[i][1]=a[i][0]=0;
    	fi(i,0,m)
    	{
    		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    		arr[i][3]=1;
		}
		//fi(i,0,m)
		//add(arr,i,a);
		fd(i,m-1,0)
		{
			if(arr[i][0]==1)
			{
				a[arr[i][1]-1][0]+=arr[i][3];
			//	a[arr[i][1]-1][0]%=mod;
				a[arr[i][2]-1][1]+=arr[i][3];
			//	a[arr[i][2]-1][1]%=mod;
			}
			else
			{
				fi(j,arr[i][1]-1,arr[i][2])
				{
					arr[j][3]+=arr[i][3];
					arr[j][3]%=mod;
				}
			}
		}
    	fi(i,0,n)
    	{
    		c+=a[i][0];
    	//	c%=mod;
    		cout<<c%mod<<" ";
    		c-=a[i][1];
    	//	(c>0)?:c=0;
		}
		nl;
    }
    return 0;
}

