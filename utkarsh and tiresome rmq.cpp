#include<iostream>
using namespace std;
int main()
{
    long long n,q,b,m,i;
    cin>>n>>q>>b>>m;
    long long a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];

    while(q--)
    {
     long long x,y,mn,ans;
     i=1;
     cin>>x>>y;
     mn=a[x]+b;
     while((x-(i-1)*y)>0&&i<=m)
     {
      ans=a[x-((i-1)*y)]+i*b;
         if(ans>mn)
            mn=ans;

            i++;
     }
        cout<<mn<<endl;
    }
    return 0;
}
