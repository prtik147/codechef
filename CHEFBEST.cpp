#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
	while(t--)
	{
		int n,flag=0,c=0,i,one=0,x=0,o=0,mx=0,flag=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
				one++;
		}
		//for(int i=0;i<n;i++)
		//cout<<a[i]<<" ";
		pair <int ,int > m[n];
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]==1)
				flag=1;
			if(flag)
			{
				if(a[i]==1)
			{
					o++;
					x++;
			}
			if(a[i]==0)
			{
				m[x].first=x;
				m[x].second++;

			}
			}
		}
		for(i=0;i<n;i++)
		if(mx<(m[i].first+m[i].second-1))		
			mx=m[i].first+m[i].second-1;

		cout<<mx<<endl;
	
	}
return 0;
}