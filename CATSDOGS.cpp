#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long c,d,l,min,max;
		cin>>c>>d>>l;
		
		if(l%4!=0)
		{
			cout<<"no"<<endl;
			continue;
		}
		
		if(c<=2*d)
		{
			min=4*d;
			max=4*(d+c);
			if(l>=min && l<=max)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
		else
		{
			min=4*(c-d);
			max=4*(d+c);
			if(l>=min && l<=max)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
		
	}
	return 0;
}
