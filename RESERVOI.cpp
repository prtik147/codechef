#include<bits/stdc++.h>

using namespace std;
/*#define ll long long
#define max(a,b) ( (a) > (b) ? (a) : (b))
#define min(a,b) ( (a) < (b) ? (a) : (b))
#define s(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define sl(n) scanf("%lld",&n)
#define sf(n) scanf("%f",&n)
#define ss(n) scanf("%s",n)
#define p(n) printf("%d",n)
#define nl printf("\n")
#define cnl cout<<endl
#define forall(i,a,b) for(int i=a;i<b;i++)
#define fordec(i,a,b) for(int i=a;i>b;i--)
#define space printf(" ")*/
int main()
{
	int t;
	s(t);
	//cin>>t;
	while(t--)
	{
		int m,n;
		s(n);
		s(m);
		//cin>>n>>m;
		char a[n+1][m+1];
		int i,j,c=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{	
				//sc(a[i][j]);
				cin>>a[i][j];
			}
		}
		for(i=1;i<=n;i++)
		{
			if(a[i][1]=='W' ||a[i][m]=='W')
			{
				c=1;
				break;
			}
		}
		if(c==1)
		{
			cout<<"no"<<endl;
			continue;
		}
		for(i=1;i<=m;i++)
		{
			if(a[n][i]=='W')
			{
				c=1;
				break;
			}
		}
		if(c==1)
		{
			cout<<"no"<<endl;
			continue;
		}
		for(i=1;i<n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i][j]=='W' && a[i+1][j]=='A')
				{
					c=1;
					break;
				}
				if(a[i][j]=='B' && a[i+1][j]=='A')
				{
					c=1;
					break;
				}
				if(a[i][j]=='B' && a[i+1][j]=='W')
				{
					c=1;
					break;
				}
			}
			if(c==1)
			break;
		}
		if(c==1)
		{
			cout<<"no"<<endl;
			continue;
		}
		for(i=1;i<=n;i++)
		{
			for(j=2;j<m;j++)
			{
				if(a[i][j]=='W' && a[i][j-1]=='A')
				{
					c=1;
					break;
				}
				if(a[i][j]=='W' && a[i][j+1]=='A')
				{
					c=1;
					break;
				}
			}
			if(c==1)
			break;
		}
		if(c==1)
		{
			cout<<"no"<<endl;
			continue;
		}
		
		cout<<"yes"<<endl;
		
		
	}
	return 0;
}
