#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     long long n,c=1,i,a,m,b,d;
     cin>>n;
    a=sqrt(n);
    if(n%2==0)
        b=n/2;
    else
        b=n/2+1;

     if(n==0)
        cout<<"0"<<endl;
     else if(n==1)
        cout<<"INFINITY"<<endl;
    else if(n==2)
        cout<<"1"<<endl;
     else
        {
            for(i=3;i<=a;i++)
            {
                m=n;
                  while(m>=i)
                  m/=i;

                if(m==1){
                      if(i<=n/2)
                     cout<<i<<" ";
                   
                    c++;
                }

            }
            c+=b;
            cout<<c<<endl;;
        }

    }
    return 0;
}

