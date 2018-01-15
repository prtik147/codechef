#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n;
     m=n%8;
     if(m==1)
        cout<<n+3<<"LB"<<endl;
     else if(m==2)
        cout<<n+3<<"MB"<<endl;
     else if(m==3)
        cout<<n+3<<"UB"<<endl;
        else if(m==4)
        cout<<n-3<<"LB"<<endl;
        else if(m==5)
        cout<<n-3<<"MB"<<endl;
        else if(m==6)
        cout<<n-3<<"UB"<<endl;
        else if(m==7)
        cout<<n+1<<"SU"<<endl;
        else if(m==0)
        cout<<n-1<<"SL"<<endl;



    }
    return 0;
}
