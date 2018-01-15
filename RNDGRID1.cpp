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
    	int l,n,i,j,k,p=0;
    	cin>>l>>n;
    	char a[l];
    	char m[n][n];
    	forall(i,0,l)
    	cin>>a[i];
    	forall(i,0,n)
    	forall(j,0,n)
    	{cin>>m[i][j];
    		if(m[i][j]=='#')p++;
    	}
    	    	/*forall(i,0,n)
    	{forall(j,0,n)
    	    	{cout<<m[i][j];}
    	    	nl;}*/
    	int ans=0;
    	if(p)
    	{for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				int x=i,y=j;
				int c=0;
				if(m[x][y]=='.')
				{
					for(k=0;k<l;k++)
					{
						if(a[k]=='L')
						{
							if((y-1 >= 0) && (m[x][y-1]=='.'))
							{c++;
							y--;
							continue;}
							else
							break;
						}
						
						if(a[k]=='R')
						{
							if((y+1 != n) && (m[x][y+1]=='.'))
							{c++;
							y++;
							continue;}
							else
							break;
						}
						
						if(a[k]=='U')
						{
							if((x-1 >= 0) && (m[x-1][y]=='.'))
							{c++;
							x--;
							continue;}
							else
							break;
						}
						else if(a[k]=='D')
						{
							if((x+1 != n) && (m[x+1][y]=='.'))
							{c++;
							x++;
							continue;}
							else
							break;
						}
						
						//c++;
					}
					//cout<<"c "<<c<<endl;
					ans=ans^c;
					//cout<<c<<" ";
				}
				//cout<<c<<" ";
			}
			//nl;
		}}
		else
		{
			forall(i,0,n)
			{
				forall(j,0,n)
				{
					int x=i,y=j,c=0;
					int lr=0,ud=0;
					forall(k,0,l)
					{
						if(a[k]=='L')
							lr--;
						else if(a[k]=='R')
							lr++;
						else if(a[k]=='U')
							ud--;
						else if(a[k]=='D')
							ud++;

						if((lr+y)>=0 && (lr+y)<n && (ud+x)>=0 && (ud+x)<n)
							c++;
						else
							break;
					}
					ans=ans^c;
					cout<<ans<<" ";
				}
				//nl;
			}
		}
		cout<<ans<<endl;
    }
    return 0;
}