#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define take(n,a)                   forall(i,0,n)cin>>a[i]
#define print(n,a)                  forall(i,0,n)cout<<a[i]<<" "
#define sqr(x) (x)*(x)
#define pb push_back 
#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define fi first
#define se second
 

int main() 
{
	ios::sync_with_stdio(false);
	int n,i,j;
    ll s;
    cin>>n;
    int num;
    vpii v;
    forall(i,0,n)
    {
        ll cs=0,cr=0;
        forall(j,0,n)
    	{
            cin>>num;
            v.pb( make_pair(num,j));
        }
        vpii vs(v);
        vpii vr(v);
        sort(vs.begin(),vs.end());
        sort(vr.rbegin(),vr.rend());
        
        vpii ::iterator it;
        forall(j,0,n)
        {
            
            for(it=vs.begin();it!=vs.end();it++)
            {
                if(it->fi==v[j].fi)
                {
                    s=abs(it->se - j);
                    cout<<s<<"s"<<endl;
                    cs=cs+s*s;
                }
            }
            for(it=vr.begin();it!=vr.end();it++)
            {
                if(it->fi==v[j].fi)
                {
                    s=abs(it->se - j);
                    cout<<s<<"s"<<endl;
                    cr=cr+s*s;
                }
            }
        }
        cout<<cr<<" crcs "<<cs<<endl;
        if(cr<cs)
            {
                for(it=vr.begin();it!=vr.end();it++)
                    cout<<it->fi<<" ";
            }
            else
            {
                for(it=vs.begin();it!=vs.end();it++)
                    cout<<it->fi<<" ";   
            }
            v.clear();
            vs.clear();
            vr.clear();
            nl;

    }
    return 0;
}