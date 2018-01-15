#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	cout<<"1 ";
	
	while((2*i)+1 <=n)
	{
	cout<<(2*i)+1<<" ";
	i++;
	}
	
	i=1;
	while(2*i<=n)
	{
		cout<<2*i<<" ";
		i++;
	}
	
	return 0;
}
