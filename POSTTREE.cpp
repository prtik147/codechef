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
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))
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
#define all(x) x.begin(),x.end()
#define fr                    first
#define se                    second
#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod                   1000000007
#define PI                    3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "

int main() 
{
	ios::sync_with_stdio(false);
	
	ll n;
	cin>>n;
	ll a[n+1][2];
	fi(i,2,n+1)
	cin>>a[i][0];
	//cout<<"a"<<endl;
	fi(i,1,n+1)
	cin>>a[i][1];
	//cout<<"a"<<endl;
    
    cout<<a[1][1]<<" ";
	//fi(i,1,n+1)
	//cout<<a[i][0]<<" "<<a[i][1]<<endl;
	fi(i,2,n+1)
	{
		ll min=a[i][1],ans=min;
		cout<<ans;
		int j,k=i;
		
		do
		{
			j=a[k][0];
			if(a[j][1]<min)
				min=a[j][1];

			k=j;
			ans+=min;
		}while(j!=1);
		cout<<ans<<" ";
	}

    return 0;
}