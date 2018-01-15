#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long w,h;
		long long k,i,u=0;d=0,r=0,l=0;
		cin>>w>>h>>k;
		char s[k];
		cin>>s;
		for(i=0;i<k;i++)
		{
			if(s[i]=='U')
			u++;
			else if(s[i]=='D')
			d++;
            else if(s[i]=='R')
			r++;
			else if(s[i]=='L')
			l++;			
		}
		
		
	}
	return 0;
}

