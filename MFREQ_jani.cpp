#include <bits/stdc++.h>

using namespace std;
vector<long long> v;

int main()
{
    long n,m;
    cin>>n>>m;
    long long val[n];
    v.push_back(1);
    for(long i=0;i<n;i++)
    {
        cin>>val[i];
        if(i && val[i]!=val[i-1])
            v.push_back(i+1);
    }
    v.push_back(n+1);
  //  for(int i=0;i<v.size();i++)
    //    cout<<v[i]<<" ";
    //cout<<endl;
    while(m--)
    {
        long long l,r,k;
        cin>>l>>r>>k;
        long long mid = (l+r)/2;
        long long e =  *(upper_bound(v.begin(),v.end(),mid)) - 1;
        long long s = *(upper_bound(v.begin(),v.end(),mid)-1);
        long long left = max(l,s),right = min(r,e);
        //cout<<"e "<<e<<" s "<<s<<endl;
//        cout<<left<<" "<<right<<endl;
        if(right-left+1 >= k)
            cout<<val[mid]<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}