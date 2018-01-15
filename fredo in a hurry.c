#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1][2],i;
        long long p=2*n,ans,x;
        for(i=1;i<=n;i++)
        {
            if(i*(i+3)>p)
                break;
        }

        ans=2*(n-i+1);
        cout<<ans<<endl;
    }
    return 0;
}
