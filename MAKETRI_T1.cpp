#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,l,r,mn=LLONG_MAX,c=0,mx;
cin>>n>>l>>r;
long long a[n],i,j,k;
	for(i=0;i<n;i++)
	cin>>a[i];

vector<bool> arr/(r-l+1);//[r-l+1]= {false};

for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			for(k=a[i]-a[j]+1;k<a[i]+a[j];k++)
			{
				if(k<l)
					continue;
				if(k>r)
					break;
				arr[k-l]=true;
			}
		}
		else
		{
			for(k=a[j]-a[i]+1;k<a[j]+a[i];k++)
			{
				if(k<l)
					continue;
				if(k>r)
					break;
				arr[k-l]=true;
			}
		}
	}
}
for(i=0;i<r-l+1;i++)
if(arr[i]==true)
	c++;

cout<<c<<endl;
return 0;
}
