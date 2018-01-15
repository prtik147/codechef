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
    	string s;
    	cin>>s;
    	//mii::iterator it1;
    	int a[10]={0};
    	int ch[100]={0};
    	string::iterator it;
    	for(it=s.begin();it!=s.end();it++)
    	{
    	//	cout<<*it-48<<" ";
    		a[*it-48]++;
		}
    	//for(it=s.begin();it!=s.end();it++)
    //	fi(i,0,10)
    //	cout<<a[i]<<" ";
    	fi(i,0,10)
    	{
    		fi(j,0,i)
    		{
    			if(a[i]!=0 && a[j]!=0)
    			{
    			ch[i*10 + j ]++;
				ch[i + j*10]++;
				}
				/*else if(a[i]!=0)
				{
					ch[i*10]++;
					ch[i]++;
				}
				else if(a[j]!=0)
				{
					ch[j ]++;
					ch[j*10]++;
				}*/
			}
		}
		if(a[6]>=2)
		ch[66]++;
		if(a[7]>=2)
		ch[77]++;
		if(a[8]>=2)
		ch[88]++;
		fi(i,65,91)
		if(ch[i]>0)
		cout<<char(i);//<<i;
		nl;
		}
    return 0;
}

