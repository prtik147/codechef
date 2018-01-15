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
    	int n,c=0;
    	cin>>n;
    	char a[n][2];
    	fi(i,0,n)
    	{
    		cin>>a[i][0];
    		if(a[i][0]=='#')
    			c++;
    	}
    	fi(i,0,n)
    	{
    		cin>>a[i][1];
    		if(a[i][1]=='#')
    			c++;
    	}

    	int f1=0,f2=0,f3=0,yes=0,no=0,cur=0,b=0;
    	fi(i,0,n)
    	{
    		if(a[i][0]=='#' && a[i][1]=='#')
    			{
    	     		b++;
    				f3=1;
    				cur+=2;
    				//f2=0;
    				//f1=0;
    			}
    		else if(a[i][0]=='#')
    			{
    				
    				if(f3==1)
    				{
    					if(b%2!=0 && f1==1)
    					{
    						no=1;
    						break;
    					}
    					if(b%2==0 && f2==1)
    					{
    						no=1;
    						break;
    					}
    				}
    				else if(f2==1)
    				{
    					no=1;
    					break;
    				}
    				f1=1;
    				f2=0;
    				f3=0;
    				b=0;
    				cur++;
    			}
    		else if(a[i][1]=='#')
    			{
    				
    				if(f3==1)
    				{
    					if(b%2!=0 && f2==1)
    					{
    						no=1;
    						break;
    					}
    					if(b%2==0 && f1==1)
    					{
    						no=1;
    						break;
    					}
    				}
    				else if(f1==1)
    				{
    					no=1;
    					break;
    				}
    				f2=1;
    				f1=0;
    				f3=0;
    				b=0;
    				cur++;
    			}
    		else
    		{
    			if(cur==0)
    				continue;
    			else if(cur==c)
    			{
    				yes=1;
    				break;
    			}
    			else
    			{
    				no=1;
    				break;
    			}
    		}

    	}
    	if(no!=1)
    		cout<<"yes"<<endl;
    	else
    		cout<<"no"<<endl;
    }
    return 0;
}