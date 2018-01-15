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
    	int f=0,prev;
        	n=l;
    	while(n)
    	{
    		m=n%10;
    		c[m]++;
    		n/=10;
    	}
        forall(j,0,10)
            {
                if(a[j]==c[j])
                {
                    f=1;
                    break;
                }
            }
            //for(int k=0;k<10;k++)
            //  cout<<c[k]<<" ";
            //nl;
            if(f==0)
                ans++;
    	//for(int k=0;k<10;k++)
    	//		cout<<c[k]<<" ";
    	//	nl;
    	
    	forall(i,l+1,r+1)
    	{
            if(f==0)
            {
                n=i;
            if(n%10==0)
            {
                
                int cnt=0;
                while((n%10)==0)
                {
                    cnt++;
                    n/=10;
                }
                if(n==1)
                {
                    c[0]+=cnt;
                    c[9]-=cnt;
                    c[1]++;
                    if(c[0]!=a[0] && c[9]!=a[9] && c[1]!=a[1])
                        ans++;
                    else
                        f=1;
                }
                else
                {
                    int aa=n%10;
                    c[0]+=cnt;
                    c[9]-=cnt;
                    c[aa]++;
                    c[aa-1]--;
                    if(c[0]!=a[0] && c[9]!=a[9] && c[aa]!=a[aa] && c[aa-1]!=a[aa-1])
                        ans++;
                    else
                        f=1;
                }
            }
            else
            {
                m=n%10;
                c[m-1]--;
                c[m]++; 
                if(c[m-1]!=a[m-1] && c[m]!=a[m])
                    ans++;
                else
                        f=1;
            }
            }
            else
            {
                n=i;
            if(n%10==0)
            {
                
                int cnt=0;
                while((n%10)==0)
                {
                    cnt++;
                    n/=10;
                }
                if(n==1)
                {
                    c[0]+=cnt;
                    c[9]-=cnt;
                    c[1]++;
                }
                else
                {
                    c[0]+=cnt;
                    c[9]-=cnt;
                    c[n%10]++;
                    c[(n%10)-1]--;
                }
            }
            else
            {
                m=n%10;
                c[m-1]--;
                c[m]++; 
            }
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


    	}
    		cout<<ans<<endl;
    }
    return 0;
}