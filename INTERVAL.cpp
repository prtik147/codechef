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

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	int l=0,r=n,j,i;
    	cin>>n>>m;
    	int a[n],sum[n+1]={0},s=0;
    	forall(i,0,n)
    	{
    		cin>>a[i];
    		s+=a[i];
    		sum[i+1]=s;
    	}
    	forall(i,0,n+1)
    	cout<<sum[i]<<" ";
    	l=0;
    	r=n;
    	long long ans=0;
    	int q,x,y;
    	long long mx=0;
    	cin>>q;
    	forall(i,l,r-q+1)
			{//cout<<"chutiya"<<endl;
				if(mx<sum[i+q]-sum[i])
				{
					mx=sum[i+q]-sum[i];
					cout<<"diff "<<mx<<endl;
					x=i;
					y=i+q;
				}
			}
			l=x;
			r=y;
			ans+=mx;

    	forall(j,0,m-1)
    	{
			
			mx=0;
			cin>>q;
			//q--;
			forall(i,l+1,r-q)
			{//cout<<"chutiya"<<endl;
				if(mx<sum[i+q]-sum[i])
				{
					mx=sum[i+q]-sum[i];
					cout<<"diff "<<mx<<endl;
					x=i;
					y=i+q;
				}
			}
			l=x;
			r=y;
			cout<<l<<" "<<r<<" "<<mx<<endl;
			if(j%2!=0)
				ans+=mx;
			else
				ans-=mx;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}


