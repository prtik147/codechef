#include<iostream>
#include<cstdio>
using namespace std;
long long GCD(long long A, long long B)
{
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;
		long long a[n],arr[n];
		int m,overm=0;

		for(i=0;i<n;i++)
		{
		scanf("%lld",&a[i]);
		arr[i]=1;
	    }

	    //for(i=0;i<n;i++)
		//cout<<a[i]<<" ";

	    if(n==1)
	    cout<<"1"<<endl;
	    else
		{
			for(i=1;i<n;i++)
		{

			m=0;

			for(j=0;j<i;j++)
			{
				//if(a[i]==0||a[j]==0)
				//break;
//cout<<"bahar"<<i<<" "<<j<<" "<<m<<" "<<a[i]<<" "<<a[j]<<endl;
				if(GCD(a[i],a[j])>1)
				{

					if(m<arr[j])
					{
					    //cout<<"sabse andar"<<i<<" "<<j<<" "<<m<<endl;
					    m=arr[j];
					}

					//cout<<"andar"<<i<<" "<<j<<" "<<m<<endl;
				}
			}

			arr[i]+=m;

			if(overm<arr[i])
			overm=arr[i];

			//cout<<overm<<" "<<i;
		}
	    }
		//for(i=0;i<n;i++)
		//cout<<arr[i]<<" ";

		cout<<overm<<endl;
	}
	return 0;
}
