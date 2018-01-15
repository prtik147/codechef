#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<"prefix"<<endl;
	for(int i=0;i<s.length();i++)
	{
		for(int j=0;j<=i;j++)
		cout<<s[j];
		cout<<endl;  
	}


	return 0;
}