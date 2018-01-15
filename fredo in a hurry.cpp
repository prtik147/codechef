#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans,x,i,y,mn=2*n;
       /* for(i=1;i<=n;i++)
        {
            if(i*(i+3)>p)
                break;
        }*/
        x=floor(sqrt(9+8*n));
        y=(x-3)/2;

        if(n==1)
            cout<<"1"<<endl;
        else{
        for(i=0;i<=y;i++)
            {
        ans=2*(n-i);
        if(mn>ans)
            mn=ans;
            }
        cout<<ans<<endl;
        }
    }
    return 0;
}
