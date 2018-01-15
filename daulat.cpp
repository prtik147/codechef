#include<iostream>
using namespace std;
long int fucn(long int r,long int n,long int l) 
{
	if(r-1==0||r-2==0)
	return n;
	else
	if(r-1==1||r-2==1)
	return l;
	else
	return fucn(r-1,n,l);

}
int main()
{
	long long int test,n,l,r,sum;
	cin>>test;
	while(test--)
	{sum=0;
		cin>>n>>l>>r;
		sum+=fucn(r,n,l);
		cout<<sum<<endl;
	}
}
