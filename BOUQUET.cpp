#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int gm,ym,rm,go,yo,ro,gp,yp,rp,a[6],i;
     cin>>gm>>ym>>rm>>go>>yo>>ro>>gp>>yp>>rp;
     a[0]=gm+ym+rm;
     a[1]=go+yo+ro;
     a[2]=gp+yp+rp;
     a[3]=ym+yo+yp;
     a[4]=gm+go+gp;
     a[5]=rm+ro+rp;
     sort(a,a+6);
     for(i=5;i>=0;i--)
     {
         if(i==0)
            cout<<"0"<<endl;
         else if(a[i]%2==0&&a[i]!=0)
         {
             cout<<a[i]-1<<endl;
             break;
         }
        else if(a[i]%2!=0)
         {
             cout<<a[i]<<endl;
             break;
         }
     }

    }
    return 0;
}
