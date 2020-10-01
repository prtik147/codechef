#include<bits/stdc++.h>
#define mx 100005
#define ll long long
#define nitro ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
vector<ll>v[mx];
vector<ll >seg[4*mx];
void build(ll low,ll high,ll node)
{
  if(low>high)
  return ;
  else if(low==high)
  {
    seg[node]=v[low];
    return ;
  }
  else{
    ll mid=(low+high)/2;
    build(low,mid,2*node+1);
    build(mid+1,high,2*node+2);
    merge(seg[2*node+1].begin(),seg[2*node+1].end(),seg[2*node+2].begin(),seg[2*node+2].end(),back_inserter(seg[node]));
    }
          
}
ll query(ll low,ll high,ll lq,ll hq,ll x,ll y,ll node)
{
  if(low>hq||high<lq)
  return 0;
  if(lq<=low && high<=hq)
    {
        ll left,right;
        if(x<y) {
            left=lower_bound(seg[node].begin(),seg[node].end(),x)-seg[node].begin();
            right=upper_bound(seg[node].begin(),seg[node].end(),y)-seg[node].begin();
            return right-left;
        }
        else {
            left=upper_bound(seg[node].begin(),seg[node].end(),x)-seg[node].begin();
            right=lower_bound(seg[node].begin(),seg[node].end(),y)-seg[node].begin();
            return left-right;
        }
    }
    ll mid=(low+high)/2;
    return query(low,mid,lq,hq,x,y,2*node+1)+query(mid+1,high,lq,hq,x,y,2*node+2);
}
int main()
{
  nitro;
    ll n,q,t;
    cin>>n;
    for(ll i=0;i<n;i++)
     {
        cin>>t;
        while(t%2==0)
        {
            v[i].push_back(2);
            t/=2;
        }
        for(ll j=3; j*j<=t; j+=2) {
            while(t%j==0)        {
                v[i].push_back(j);
                t/=j;
            }
        }
        if(t>2)
            v[i].push_back(t);
    }
    build(0,n-1,0);
    cin>>q;
    int x,y,l,r;
    for(ll i=0; i<q; i++)
    {
        cin>>l>>r>>x>>y;
        cout<<query(0,n-1,l-1,r-1,x,y,0)<<"\n";
    }
    return 0;
} 