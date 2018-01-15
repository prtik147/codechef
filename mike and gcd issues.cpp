#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int gcd(int, int);
int lcm(int, int);
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    int j,p;
    for(i=0;i<n;i++)
    {
        int pm;
        for(j=1;j<n;j++)
		{
			if((i-j)>=0)
			{
				pm=gcd(a[i],a[i-j]);
				if(pm!=1)
				{
					p=i-j+1;
					cout<<p<<" ";
					break;
				}
			}
			if((i+j)<=n-1)
			{
				pm=gcd(a[i],a[i+j]);
				if(pm!=1)
				{
					p=i+j+1;
					cout<<p<<" ";
					break;
				}
			}
        }
         if(j==n)
        cout<<"-1"<<" ";
    }

    return 0;
}
int gcd(int x, int y) {
    if(y==0)
        return x;
    else
        return gcd(y, x % y);
}
int lcm(int a, int b)
{
	return (a*b)/gcd(a,b);
}
