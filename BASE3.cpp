//PRATEEK KUMAR MAURYA
//NITRR(2015-2019)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
     long long n,c=0,i,a,m,b;
     cin>>n;
    a=sqrt(n);
    if(n%2==0)
        b=n/2;
    else
        b=n/2+1;

        long long x,y,z,w;
        w=sqrt(n);
        x=sqrt(n/2);
        y=cbrt(n);
        z=cbrt(n/2);
        //u=sqrt(w);
        //v=sqrt(x);
     //  cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;

     if(n==0)
        cout<<"0"<<endl;
     else if(n==1)
        cout<<"INFINITY"<<endl;
    else if(n<=15)
        {
        	for(i=2;i<=n;i++)
            {
                m=n;
                  while(m>=i)
                  m/=i;

                if(m==1){
                    c++;
                  //  cout<<c<<" ";
                }

            }
            cout<<c<<endl;
		}
     else
        {
            for(i=2;i<=z;i++)
            {
                m=n;
                  while(m>=i)
                  m/=i;

                if(m==1){
                    c++;
                //    cout<<c<<" ";
                }

            }
           int  p,q;
            c+=(w-x);
            c+=(y-z);
            c+=b;
            
            
          //  for(p=ceil(x);p<=w;p++)
           // cout<<p<<" ";
            //for(p=ceil(z);p<=y;p++)
           // cout<<p<<" "; 
            
            cout<<c<<endl;
        }
    }
    return 0;
}
