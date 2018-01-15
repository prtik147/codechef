#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		int a[n+1],small[n+1],j=0,big=0;
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]<k)
			{
				small[j]=a[i];
				j++;
			}
			else
			big++;
		}
		
		cout<<"big and j "<<big<<" "<<j<<endl;
		long long ans=big*(pow(2,n-1)-1),sum;
		
		if(big!=0)
		ans++;
		
		cout<<"calc "<<ans<<endl;
		
		
		for(long long p=0;p<j-1;p++)
		{
			for(long long q=p+1;q<j;q++)
			{
				if(q==p+1)
				{
					sum=small[p] | small[q];
					if(sum>=k)
					{cout<<"increasing "<<p<<" "<<q<<endl;
					ans++;
					}
				}
				else
				{
					sum =sum | small[q];
					if(sum>=k)
					{cout<<"increasing "<<p<<" "<<q<<endl;
					ans++;
					}
				}
			}
		}
		
		cout<<ans<<endl;
		
	}
	return 0;
}
