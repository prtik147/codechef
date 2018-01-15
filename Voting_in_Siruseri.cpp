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
typedef map<int,int > mii;
typedef map<string,int > msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

int main() 
{
    int z1,z2,z3,z4,z5,i=0,j=0,k=0,l=0,m=0;
    cin>>z1>>z2>>z3>>z4>>z5;
    int a[z1+z2+z3+z4+z5];
    forall(i,0,z1+z2+z3+z4+z5)
    cin>>a[i];

    int c=0,cur=1;
    sort(a,a+z1+z2+z3+z4+z5);

    forall(i,0,z1+z2+z3+z4+z5)
    {
    	if(a[i]==a[i+1])
    		cur++;
    	else
    	{
    		if(cur>=3)
    			c++;
    		cur=1;
    	}
    }
    cout<<c<<endl;

    return 0;
}


