#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,l,r,mn=LLONG_MAX,c=0,mx;
cin>>n>>l>>r;
long long a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
sort(a,a+n);

for(i=0;i<n-1;i++)
if(mn>(a[i+1]-a[i]))
mn=a[i+1]-a[i];

//cout<<mn<<endl;
mx=a[n-1]+a[n-2];
//for(i=l;i<=r;i++)
//if(i>mn)
//c++;
if(mn>=l && mx>r)
c=r-mn;
else if(mn>=l && mx<=r)
c=mx-mn-1;
else if(mn<l && mx>r)
c=r-l+1;
else if(mn<l && mx<=r)
c=mx-l;

cout<<c<<endl;

}
if(cur && (k-1)->first<=r)
		{
			if((k-1)->first==k->first)
			{
				if((k-1)->second != k->second)
				{	c++;
				cout<<"1 "<<c<<endl;}
			}
			else if((k-1)->first>=l && k->first>r)
			{if((k-1)->first<=r)
				{c+=r-(k-1)->first+1;
				cout<<"2 "<<c<<(k-1)->first<<endl;}
			}
			else if((k-1)->first>=l && k->first<=r)
			{c+=k->first-(k-1)->first+1;//+1
				cout<<"3 "<<c<<endl;}
			else if((k-1)->first<l && k->first>r)
			{c+=r-l+1;
				cout<<"4 "<<c<<endl;}
			else if((k-1)->first<l && k->first<=r)
			{c+=k->first-l+1;
				cout<<"5 "<<c<<endl;}
		}