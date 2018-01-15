#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long n,m=1;
	cin>>n;
	
	pratik:
	while(n)
	{
		if(n%10!=0)
		m*=n%10;
		
		n/=10;
	}
	n=m;
	m=1;
	if(n>9)
	goto pratik;
	
	cout<<n;
	return 0;
}

