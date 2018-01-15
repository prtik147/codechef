#include<vector>
#include<iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n,i;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++)
        cin>>a[i];
    	vector<int> v;
    	int l=0,r=n-1;
    	while(l<=r)
    	{
    		if(a[l]>=a[r])
    		{
    			v.push_back(a[r]);
    			r--;
    		}
    		else
    		{
    			v.push_back(a[l]);
    			l++;
    		}
    	}
    	long long ans=0;
    	for(i=0;i<v.size();i++)
    	{
    		ans+=((i+1)*v[i]);
           // cout<<ans<<" ";
    	}
        //for(i=0;i<v.size();i++)
        //cout<<v[i]<<" ";
    //nl;
    	cout<<ans<<endl;
    }
    return 0;
}