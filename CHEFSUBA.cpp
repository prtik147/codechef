#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <array>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define wis(x)                  cout<<#x<<" "<<x<<endl;
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "

int main() 
{
	ios::sync_with_stdio(false);
	int n,k,p,i;
	cin>>n>>k>>p;
	int a[n],ans[n];
	take(a,n);
	int mxc=0,mx;
	int pos=0;
	fi(i,0,k)
	{
		if(a[i]==1)
			mxc++;
	}
	//wis(mxc);
	mx=mxc;
	fi(i,0,n)
	ans[i]=INT_MAX;
	for(int i=0;i<(n-k);i++)
	{
		if(a[i]==1)
			mx--;
		if(a[i+k]==1)
			mx++;
		
		if(mx>mxc)
			{
				mxc=mx;
				pos=i+1;
			}
		//mx=mxc;
	}
	//wis(mxc);
	//wis(pos);
	int j=0;
	int pos2=pos;
	fi(i,pos,n-k+1)
	{
		ans[j]=mxc;
		j++;
	}
	j=n-1;
	while(pos2--)
	{
		ans[j]=mxc;
		j--;
	}
	//prs(ans,n);
			int s=0;
	while(p--)
	{
		char c;
		cin>>c;
	//	wis(c);
		if(c=='!')
			{s++;
				//wis(s);
			}
		else
		{
			if(ans[s]==INT_MAX)
			{
				int m=0,mc=0,ad[n];
				for(i=0;i<n;i++)
     			ad[(i+s)%n]=a[i];

     			fi(i,0,k)
				{
					if(ad[i]==1)
					mc++;
				}
	//			wis(mc);
				m=mc;   
				for(int i=0;i<(n-k+1);i++)
				{
				if(ad[i]==1)
					m--;
				else
					m++;
				if(ad[i+k]==1)
					m++;
				else
					m--;
					if(m>mc)
					{
						mc=m;
					//	pos=i;
					}
				m=mc;
				}
				cout<<mc<<endl;
			}
			else
				cout<<ans[s]<<endl;
		}
	}
    return 0;
}//1 1 1 0 0