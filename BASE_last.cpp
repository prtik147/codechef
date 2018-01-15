//PRATEEK KUMAR MAURYA
//NITRR(2015-2019)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     long long n,c=0,i,a,m,b;
     cin>>n;
    if(n%2==0)
        b=n/2;
    else
        b=n/2+1;

        long long x,y,z,w;
        w=sqrt(n);
        x=sqrt(n/2);
        y=cbrt(n);
        z=cbrt(n/2);
        
     if(n==0)
        cout<<"0"<<endl;
     else if(n==1)
        cout<<"INFINITY"<<endl;
     else
        {
            for(i=2;i<=cbrt(n/2);i++)
            {
                m=n;
                  while(m>=i)
                  m/=i;

                if(m==1)
                    c++;

            }
            c+=(w-x);
            c+=(y-z);
            c+=b;
            
            cout<<c<<endl;
        }
    }
    return 0;
}
