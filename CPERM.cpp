//PRATEEK KUMAR MAURYA
//NIT RAIPUR(2015-2019)
#include<iostream>
#include<conio.h>
using namespace std;
long long moduler(long long x,long long y,long long p)
{
    long long res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans;
        cin>>n;
        if(n==1)
            ans=2;
        else
        {
        ans=moduler(2,n-1,1000000007);
        }

        cout<<ans-2<<endl;

    }
    getch();
    return 0;
}
