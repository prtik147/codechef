#include<iostream>
using namespace std;
int main()
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{	
		int s=0,m=0,c=0;
		cin>>str;
		int l=str.length();
		for(int i=0;i<l;++i)
		{
			if(str[i]=='m')
			{
			m++;
			if(i==0)
			{
				if(str[i+1]=='s')
				c++;
			}
			else if(i==(l-1))
			{
				if(str[i-1]=='s')
				c++;
			}
			else 
			{
			if(str[i-1]=='s'||str[i+1]=='s')
			c++;
			}
			}
			else
			{
				s++;
			}
		}
		if((s-c)==m)
		cout<<"tie\n";
		else if((s-c)>m)
		cout<<"snakes\n";
		else
		cout<<"mongooses\n";
		//cout<<c<<endl<<s<<endl<<m<<endl;
	}
	return 0;
}