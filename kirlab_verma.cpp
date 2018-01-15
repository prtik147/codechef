#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int test,n,i,j;
cin>>test;
while(test--)
{
cin>>n;
long int a[n];
for(i=1;i<=n;i++)
cin>>a[i];
int c[n];
for(i=1;i<=n;i++)
c[i]=1;
int k;
for(i=1;i<=n;i++)
 {int cp=0;
 k=i;
   for(j=i;j>0;j--)
    {
    if(__gcd(a[k],a[j])>1)
{cp++;
k=j;
}
}
c[i]=cp;}
sort(c+1,c+n+1);
cout<<c[n]<<endl;
}
return 0;
}
