/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
//15118050               //
/*=======================*/
#include <bits/stdc++.h>
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

int l=0,r,j,i;
long long cal(int l,int r,int q,long long a[])
{
	long long m=a[l+q],x,y;
	forall(i,l+q+1,r)
	{
		if(m<a[i]-a[i-q])
		{
			m=a[i]-a[i-q];
			x=i-q;
			y=i;
		}
	}
	l=x;
	r=y;
	return m;
} 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	
    	cin>>n>>m;
    	r=n;
    	long long a[n],sum[n]={0},s=0;
    	forall(i,0,n)
    	{
    		cin>>a[i];
    		s+=a[i];
    		sum[i]=s;
    	}
    	forall(i,0,n)
    	cout<<sum[i]<<" ";
    	l=0;
    	r=n;
    	long long ans=0;
    	int q,x,y;
    	
    	cin>>q;
    	long long mx=sum[q-1];
    	forall(i,q,r)
			{
				if(mx<sum[i]-sum[i-q])
				{
					mx=sum[i]-sum[i-q];
					cout<<"diff "<<mx<<endl;
					x=i;
					y=i-q+1;
				}
			}
			r=x;
			l=y;
			ans+=mx;
			cout<<l<<" "<<r<<endl;
			//cout<<ans<<" ";

			forall(j,0,m-1)
			{
				cin>>q;
				mx=cal(l,r,q,sum);

				if(j%2==0)
					ans-=mx;
				else
					ans+=mx;
				cout<<ans<<" ";
			}
		
    	cout<<ans<<endl;
    }
    return 0;
}


