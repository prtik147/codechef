#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		long long a[n],arr[n];
		int num;

		for(i=0;i<n;i++)
		{
		scanf("%lld",&a[i]);
		arr[i]=1;
	    }

	    if(n==1)
	    {
	    	cout<<"1"<<endl;
		}
	    else
	    {
	    		for(i=1;i<n;i++)
		{

			num=0;

			for(j=0;j<i;j++)
			{
				if(a[i]>a[j])
				{
					if(num<arr[j])
					{
					num=arr[j];
					}
				}
			}

			arr[i]+=num;
		}
        
        while(m--)
        {
        	int l,r,j,mn=n,mx=1;
        	cin>>l>>r;
        	for(j=l-1;j<=r-1;j++)
        	{
        		if(arr[j]>mx)
        		mx=arr[j];
        		
        		if(arr[j]<mn)
        		mn=arr[j];
			}
        	cout<<mx-mn+1<<endl;
		}
		}
		
		
	}
	return 0;
}
