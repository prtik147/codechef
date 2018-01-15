#include<iostream>
using namespace std;
int main()
{
 long  t;
 test : while(t--)
    {
     long n,i,c=0;
     cin>>n;
     long long a[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]<-1||a[i]>1)
            c++;
     }
     if(c>=2)
        {
            cout<<"no"<<endl;
            goto test;
        }




    }
return 0;
}
