#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
long int root(long long int n,int k)
{
    long int y = pow(10,12/k),i;
    for(i=1;i<=y;i++)
    {
        if(pow(i,k)>n)
            return i-1;
    }
}
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"INFINITY\n";
            continue;
        }
        long long int i,sum = n-n/2;
        long int a = root(n,4), b = root(n,3),c = sqrt(n),d = root(n/2,3),e = sqrt(n/2);
        float lg = log(n/2),ug = log(n);
        if(n<1000)
        {
            for(i=2;i<=c;i++)
            {
                if(i==2)
                {
                    sum++;
                    continue;
                }
                float z = log(i);
                double k = (ug/z),j = (lg/z);
                if(floor(j)+1 == floor(k))
                    sum++;
            }
            cout<<sum<<endl;
            continue;
        }
        for(i=2;i<=c;i++)
        {
            if(i==2)
            {
                sum++;
                continue;
            }
            float z = log(i);
            double k = (ug/z),j = (lg/z);
            if(floor(j)+1 == floor(k))
                sum++;
            if(i>=a&&i<d)
                i = d-1;
            else if(i>=b&&i<e)
                i = e-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
