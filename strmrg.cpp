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
	int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	string a,b;
    	cin>>a>>b;
    	int arr[n+1][m+1][26];
    	fi(i,0,m+1)
    	fi(j,0,n+1)
    	fi(k,0,26)
    	arr[i][j][k]=0;

    	arr[1][0][a[0]-97]=1;
    	fi(i,2,n+1)
    	{
    		if(a[i-1]==a[i-2])
    		arr[i-1][0][a[i-1]-97]=arr[i-2][0][a[i-1]-97];
    		else
    		arr[i-1][0][a[i-1]-97]=arr[i-2][0][a[i-2]-97]+1;
    	}
    	arr[0][1][b[0]-97]=1;
    	fi(i,2,m+1)
    	{
    		if(b[i-1]==b[i-2])
    		arr[0][i-1][b[i-1]-97]=arr[0][i-2][b[i-1]-97];
    		else
    		arr[0][i-1][b[i-1]-97]=arr[0][i-2][b[i-2]-97]+1;
    	}
    	fi(i,1,m+1)
    	{
    		fi(j,1,n+1)
    		{
    			if(a[i-1]==b[j-1])
    			{
    				//fi(k,0,26)
    				//{
    				//	arr[i][j][k]=MIN(arr[i-1][j][k],arr[i][j-1][k]);
    				//}
    				arr[i][j][a[i-1]-97]=MIN(arr[i-1][j][a[i-1]-97],arr[i][j-1][b[j-1]-97]);
    			}
    			else
    			{
    				int mx=INT_MAX;
    				fi(k,0,26)
    				{
    					if(arr[i-1][j][k]==0)
    						continue;
    					if(arr[i-1][j][k]==arr[i][j][a[i-1]-97])
    					{
    						mx=MIN(mx,arr[i-1][j][k]);
    					}
    					else
    						mx=MIN(mx,arr[i-1][j][k]+1);
    				}
    				arr[i][j][a[i-1]-97]=mx;
    				mx=INT_MAX;
    				fi(k,0,26)
    				{
    					if(arr[i][j-1][k]==0)
    						continue;
    					if(arr[i][j-1][k]==arr[i][j][b[j-1]-97])
    					{
    						mx=MIN(mx,arr[i][j-1][k]);
    					}
    					else
    						mx=MIN(mx,arr[i][j-1][k]+1);
    				}
    				arr[i][j][b[i-1]-97]=mx;
    			}
    		}
    	}
    	int mx=INT_MAX;
    	fi(i,0,26)
    	{
    		mx=MIN(mx,arr[n][m][i]);
    	}
    	cout<<mx<<endl;
    }
    return 0;
}
