#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long ans,x,i,y,mn=2*n;

        x=sqrt(9+8*n);
        y=(x-3)/2;

        if(n==1)
            printf("1\n");
        else
        {
        for(i=1;i<=y;i++)
            {
        ans=2*(n-i);
        if(mn>ans)
            mn=ans;
            }
        printf("%lld\n",mn);
        }
    }
    return 0;
}
