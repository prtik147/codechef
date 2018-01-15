#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i,x=0;
		long long sum=0;
		for(i=0;i<n;i++)
		cin>>a[i];

		for(i=0;i<n;i++)
		{
			if(x==i)
			{
				if(a[i]==0)
					sum+=1100;
			}
			else
			{
				sum+=1100;
			}
		}
		cout<<sum<<endl;

	}
return 0;
}