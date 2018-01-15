#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long n,max=0,i,num;
    cin>>n;
	int a[n+1]={0};
	i=n;
	while(i--)
	{
		cin>>num;
		a[num]++;
		if(a[num]>max||num>max)
		{
			if(num>a[num])
			max=num;
			else
			max=a[num];
		}
	}	
	cout<<max<<endl;
	return 0;
}

