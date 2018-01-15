#include<stdio.h>
//#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int n,*l,x,y,i;
int main()
{
	scanf("%d",&n);
	l=(int *)calloc(n+1,8);
	for(x=0;2*x*x<=n;x++)
	{
		for(y=x;(i=x*x+y*y)<=n;y++)
		{
			l[2*i]=x;
			l[2*i+1]=y;
		}
	}
	
	
	for(x=0,y=n; ;x++,y--)
	if(!x   |   l[2*x+1]&&l[2*y+1])
	{
	printf("%d %d %d %d\n",l[2*x],l[2*x+1],l[2*y],l[2*y+1]);
	break;
	}
	return 0;
}
