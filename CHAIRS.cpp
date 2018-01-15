#include<iostream>
using namespace std;
#define forall(i,a,b)               for(int i=a;i<b;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][3],i,z=0;
		forall(i,0,n)
			cin>>a[i][0];
		forall(i,0,n)
		{
			if(a[i][0]==0)
				z++;
			a[i][1]=z;
		}z=0;
		for(i=n-1;i>=0;i--)
		{
			if(a[i][0]==0)
				z++;
			a[i][2]=z;
		}
		forall(i,0,n)
		cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;

	}
	return 0;
}