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
 
int bs(int arr[],int l, int r, int k)
{
    int m;
    while(l<r)
    {
        m=(l+r)/2;
        if(arr[m]>k)
            r=m;
        else
            l=m+1;
    }
    return r;
}
int main() 
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,r;
        cin>>p>>q>>r;
        int a[p],b[q],c[r];
        ll as[p+1],cs[r+1];
        as[0]=0;
        cs[0]=0;
        fi(i,0,p)
            cin>>a[i];
        fi(i,0,q)
            cin>>b[i];
        fi(i,0,r)
            cin>>c[i];
 
        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);
 
        ll s=0;
        fi(i,0,p)
        {
            s=(s+a[i])%mod;
            as[i+1]=s;
        }
        s=0;
        fi(i,0,r)
        {
            s=(s+c[i])%mod;
            cs[i+1]=s;
        }
        ll ans=0;
        int pa=0,pc=0;
        fi(i,0,q)
        {
            
            if(b[i]<a[0])
                pa=-1;
            else if(b[i]>=a[p-1])
                pa=p;
            else
                pa=bs(a,pa,p-1,b[i]);    
            
            if(b[i]<c[0])
                pc=-1;
            else if(b[i]>=c[r-1])
                pc=r;
            else
                pc=bs(c,pc,r-1,b[i]);
            
            if(pa==-1 || pc==-1)
                continue;
            ll res1,res2;
            res1=(b[i]*pa+as[pa])%mod;
            res2=(b[i]*pc+cs[pc])%mod;
            ans=(ans+(res1*res2)%mod)%mod;
        }
        cout<<ans%mod<<endl;
    }
    return 0;
} 