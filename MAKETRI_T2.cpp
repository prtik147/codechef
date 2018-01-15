#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,l,r,mn=LLONG_MAX,c=0,mx,k;
cin>>n>>l>>r;
long long a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
sort(a,a+n);

int arr[r+5]={0};
for(i=0;i<n-1;i++)
{
	for(k=a[i+1]-a[i]+1;k<a[i+1]+a[i];k++)
			{
				if(k<l)
					continue;
				if(k>r)
					break;

				if(arr[k]==0)
				{
					c++;
					arr[k-l]=1;
				}

				
			}
}

//cout<<mn<<endl;
//mx=a[n-1]+a[n-2];

cout<<c<<endl;
return 0;
}
