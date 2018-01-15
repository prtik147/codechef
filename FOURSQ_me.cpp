#include<bits/stdc++.h>
using namespace std;


int *l,x,y,i;
long long m;

void sq()
{
	//scanf("%d",&n);
	l=(int *)calloc(m+1,8);
	//long long l[2*m +3];
	for(x=0;2*x*x<=m;x++)
	{
		for(y=x;(i=x*x+y*y)<=m;y++)
		{
			l[2*i]=x;
			l[2*i+1]=y;
		}
	}
	
	
	for(x=0,y=m; ;x++,y--)
	//if(!x | l[2*x+1]&&l[2*y+1])
	if(((x==0) | l[2*x+1]) && l[2*y+1])
	{
	printf("%d %d %d %d\n",l[2*x],l[2*x+1],l[2*y],l[2*y+1]);
	break;
	}
	
	free(l);
	//return 0;
}




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,i;
		long long p;
		cin>>n>>q>>p;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		
		while(q--)
		{
			int qt,xi,yi,l,r;
			cin>>qt;
			m=1;
			if(qt==1)
			{
				cin>>xi>>yi;
				a[xi-1]=yi;
			}
			else
			{
				cin>>l>>r;
				for(i=l-1;i<r;i++)
				{
					m*=a[i];
					m=m%p;
				}
				//cout<<"m "<<m<<endl;
				sq();
			}
			
		}
	}
	return 0;
}
