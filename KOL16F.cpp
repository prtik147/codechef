#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,test;
	cin>>test;
	for(t=1;t<=test;t++)
	{
		char s[100005];
		cin>>s;
		int a=0,r=0,first=0,last=0,i=0,j=strlen(s),k,total;
		int ac,rc;
		
		if(s[0]==s[strlen(s)-1])
		{
			if(s[0]=='R')
			rc=1;
			else
			ac=1;
			
			for(i=0;i<strlen(s)-1;i++)
		{
			if(s[i]==s[i+1])
			{
				if(s[i]=='A')
				ac++;
				else
				rc++;
			}
			else
			break;
		}
		if(ac>rc)
		first=ac;
		else
		first=rc;
		
		if(s[strlen(s)-1]=='R')
			rc=1;
			else
			ac=1;
			
			for(j=strlen(s)-1;j>=0;j--)
		{
			if(s[j]==s[j-1])
			{
				if(s[j]=='A')
				ac++;
				else
				rc++;
			}
			else
			break;
		}
		if(ac>rc)
		last=ac;
		else
		last=rc;
		}
		cout<<first<<"  "<<last<<endl;
		if(first+last>=strlen(s))
		{
			cout<<"Case "<<t<<": "<<strlen(s)-1<<endl;
			continue;
		}
		ac=1;
		rc=1;
		cout<<i+1<<" "<<j-1<<endl;
		for(k=i+1;k<j;k++)
		{
			if(s[k]==s[k+1])
			{
				if(s[k]=='R')
				rc++;
				else
				ac++;
			}
			else
			{
				if(r<rc)
				r=rc;
                if(a<ac)
				a=ac;
				
				rc=1;
				ac=1;				
			}	
		}
		cout<<a<<" "<<r;
		total=first+last;
		
		/*if((a>r&&a<total)||(a<r&&a>total))
		{
			cout<<"Case "<<t<<": "<<a-1<<endl;
			continue;
		}
		else if((total>a&&total<r)||(total<a&&total>r))
		{
			cout<<"Case "<<t<<": "<<t-1<<endl;
			continue;
		}
		else if((r>a&&r<total)||(r<a&&r>total))
		{
			cout<<"Case "<<t<<": "<<r-1<<endl;
			continue;
		}*/
		
	}
	return 0;
}
