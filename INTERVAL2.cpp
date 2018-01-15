/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
//15118050               //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <map>
#include <utility>
#include <set>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sll(n)                      scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
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
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	long long l,r,q;
    	int n,m;
    	//long long l,r;
    	cin>>n>>m;
    	long long a[n],sum[n+1],s=0;
    	sum[0]=0;
    	forall(i,0,n)
    	{
    		cin>>a[i];
    		s+=a[i];
    		sum[i+1]=s;
    	}
    	//forall(i,0,n)
    	//cout<<a[i]<<" ";
    	//cout<<endl;
    	//forall(i,0,n)
    	//cout<<sum[i]<<" ";
    	
    	//cout<<l<<" "<<r<<endl;
    	long long ans=0,f=0;
    	int x,y;
  
    	cin>>q;
    	long long mx=sum[q];
    	l=1;
    	r=q;
    	forall(i,q+1,n)
			{
				if(mx<(sum[i]-sum[i-q]))
				{
					mx=sum[i]-sum[i-q];
					//cout<<"diff "<<mx<<endl;
					r=i;
					l=i-q;
					//f=1;
				}
				else if(mx==(sum[i]-sum[i-q]))
				{
					ll e,f;
					e=sum[r]-sum[l-1];
					f=sum[i]-sum[i-q-1];
					if(e>f)
					{
						mx=sum[i]-sum[i-q];
						//cout<<"diff "<<mx<<endl;
						r=i;
						l=i-q;
					}
				}
	//			cout<<x<<" "<<y<<" xy"<<endl;
			}
			/*if(f==1)
			{
	//			cout<<"check"<<endl;
			r=x;
			l=y+1;
			f=0;
			}*/
			ans+=mx;
	//		cout<<mx<<endl;
	//		cout<<l<<" "<<r<<endl;
			cin>>q;
			mx=sum[l+q]-sum[l];
			int lt=l;
			int rt=r;
			l=l+1;
			r=l+q-1;
			forall(i,lt+q+1,rt)
			{
				if(mx<(sum[i]-sum[i-q]))
				{
					mx=sum[i]-sum[i-q];
					//cout<<"diff "<<mx<<endl;
					r=i;
					l=i-q;
					//f=1;
				}
				else if(mx==(sum[i]-sum[i-q]))
				{
					ll e,f;
					e=sum[r]-sum[l-1];
					f=sum[i]-sum[i-q-1];
					if(e>f)
					{
						mx=sum[i]-sum[i-q];
						//cout<<"diff "<<mx<<endl;
						r=i;
						l=i-q;
					}
			}
		}

			cout<<ans-mx<<endl;
    }
    return 0;
}
 
 
 