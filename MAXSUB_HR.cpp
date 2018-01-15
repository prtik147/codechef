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
	int a[n+1],i,j;
	long long sum[n+1]={0},s=0,mx=LLONG_MIN;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
			s+=a[i];

		//if(e<a[i])
		//	e=a[i];
		if(sum[i-1]>0)
		sum[i]=a[i]+sum[i-1];
		else
			sum[i]=a[i];
	}

	//for(i=1;i<=n;i++)
	//{
		for(j=0;j<i;j++)
		{
			//if(mx<sum[i]-sum[j])
				if(mx<a[j])
		}
	//}
	cout<<mx<<" ";
	if(mx<0)
		cout<<mx<<endl;
	else
		cout<<s<<endl;
}
return 0;
}
