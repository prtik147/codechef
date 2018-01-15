#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans=0;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            ans+=a[i];
            else
            ans-=a[i];
        }
        cout<<abs(ans)<<endl;
    }
    return 0;
}

