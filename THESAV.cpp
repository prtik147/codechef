#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    char s[100005];
	    cin>>s;
	    long long i,j;
	    i=strlen(s);
	    if(s[0]=='0')
	    {
	    	cout<<"NO";
	    	continue;
		}
		for(j=0;j<i-2;j++)
		{
			if(s[j]=='0'&&s[j+1]=='0'&&s[j+2]=='0')
			{
				cout<<"NO"<<endl;
				break;
			}
		}
		
		if(j==i-2)
	    cout<<"YES"<<endl;
		
	    
		
	}
	return 0;
}

