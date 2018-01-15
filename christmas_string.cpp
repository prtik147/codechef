#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[3005];
	cin>>s;
	int n,len=strlen(s);
	cin>>n;
	int a[3003]={0},max=0,cnt=0;
	while(n--)
	{
		char match[len+3];
		cin>>match;
		int c=0,i,pos;
		for(i=0;i<len;i++)
		{
			//c=0;
			
			if(s[i]=='*')
			continue;
			
			if(match[i]!=s[i])
			{
				c++;
				pos=i;
			}
			
			if(c==2)
			break;
		}
		if(c==1)
		{
			//cout<<"for no. "<<n<<" worked";
			a[pos]++;
			if(max < a[pos])
			max=a[pos];
		}
		if(c==0)
		{
			//cout<<"cnt increased"<<endl;
			cnt++;
		}
		
	}
	//for(int j=0;j<len;j++)
	//cout<<a[j]<<" ";
	int ans=max+  cnt;
	cout<<ans<<endl;
	//cout<<max<<" "<<cnt;
	
	return 0;
}
