#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long v=0,su=0;
		while(n--)
		{
			char s[17];
		int len;
		cin>>s;
		len=strlen(s);
		
		if(s[len-1]=='n' && s[len-2]=='a' && s[len-3]=='m')
		su++;
		else
		v++;
		}
		//cout<<su<<" "<<v<<endl;
		if(su>=v+2)
		{
			cout<<"superheroes"<<endl;
			break;
		}
		if(v>=su+3)
		{
			cout<<"villains"<<endl;
			break;
		}
		
	}
	return 0;
}
