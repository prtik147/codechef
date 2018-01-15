#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,i,min=LLONG_MAX;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(min>a[i])
			min=a[i];
		}
		
		cout<<(n-1)*min<<endl;
	}
	return 0;
}
