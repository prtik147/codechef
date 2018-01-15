#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n;
        cin>>m;
        int a[n+1];
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

        sort(a+1,a+n+1);

        for(i=1;i<=n;i++)
        printf("%d ",a[i]);

        while(m--)
        {
            double z,w;
            long long q,y=0,ans=0,x=0;
            cin>>q;
            /*x=(2*n+1)*(2*n+1)-8*q;
            y=sqrt(x);
            w=sqrt(x);
            if(w-y==0)
                y--;

            z=2*n+1;
            ans=(z-y)/2;
            cout<<a[n-ans]<<endl;*/
            while(1)
            {
                if(q<=n-y+x)
                    {cout<<a[n-y]<<endl;
                    break;}
                else
                {
                 x=x+n-y;
                 y++;
                }

            }

        }

    }
    return 0;
}
