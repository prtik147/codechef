#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n>>m;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		long long s=0;
		int l,r,x;	
		cin>>l>>r>>x;
		
		for(i=l-1;i<=r-1;i++)
		s+=(a[i]%x);
		
		cout<<s<<endl;
		
	}
	return 0;
}
