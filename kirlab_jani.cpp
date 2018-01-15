#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int m[100001];
        long long int n,i;
        cin>>n;
        long long int a[n];
        
        //cout<<m[0]<<m[1]<<m[2]<<m[3]<<m[4]<<m[5]<<m[6]<<m[7];
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[i]=1;
        }
        long int y = 1;
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(a[i],a[j])>1)
                {
                    m[i] = max(m[j]+1,m[i]);
                }
            }
        }
        long long int cnt = 0;
        long int* p = max_element(m,m+n);
        cout<<*p<<endl;
    }
    return 0;
}
