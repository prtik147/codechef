#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		while(m--)
			{
				//cout<<"\n"<<n<<" "<<m<<endl;
				int x;
				cin>>x;
				
				if(n%2==0)
				cout<<"1 ";
				else if(x==(n/2)+1)
				cout<<"2 ";
				else
				cout<<"1 ";
			}
			cout<<endl;
	}
	return 0;
}
