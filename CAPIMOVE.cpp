#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,pop,j;
		cin>>n;
		int ans[n];
		
		vector<pair<int,int> > v;
		
		for(i=0;i<n;i++)
		{
			cin>>pop;
			//p.first=pop;
			//p.second=i+1;
			v.push_back(make_pair(pop,i));
		}
		sort(v.rbegin(),v.rend());
		
		vector < vector< int> > ct(n, vector < int> ());

        
		for(i=0;i<n;i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		
		for(i=0;i<n;i++)
		ct[i].push_back(i);
		
		int m=n-1;
		while(m--)
		{
			int u,v;
			cin>>u>>v;
			ct[u-1].push_back(v-1);
			ct[v-1].push_back(u-1);
			
		}
			
		vector <int > ::iterator col;
		vector < vector< int> >::iterator row;
		
		int a[n]={0};
		int k=0;
          for(row=ct.begin();row!=ct.end();++row)
		{
			for(col =row->begin(); col!= row->end();++col)
				{
					a[*col]=1;
				}
			for(j=0;j<n;j++)
			{
				if(a[j] != 1)
				{
					ans[k]=v[j].second;
					break;
				}
			}
				
		   
			for(col =row->begin(); col!= row->end();col++)
				{
					a[*col]=0;
				}
				k++;
			
		}
		
		for(i=0;i<n;i++)
		cout<<ans[i+1]<<" ";
		
		cout<<endl;
	}
	return 0;
}
