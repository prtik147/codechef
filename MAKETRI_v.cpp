#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long n,l,r,mn=LLONG_MAX,c=0,mx,num;
cin>>n>>l>>r;
long long i;
vector <long long> v;
	for(i=0;i<n;i++)
	{
		cin>>num;
		v.push_back(num);
	}
sort(v.begin(),v.end());

for(i=0;i<n-1;i++)
if((v[i+1]-v[i])<mn)
mn=v[i+1]-v[i];

//cout<<mn<<endl;
mx=v[n-1]+v[n-2];

/*if(mn>=l && mx>r)
c=r-mn;
else if(mn>=l && mx<=r)
c=mx-mn-1;
else if(mn<l && mx>r)
c=r-l+1;
else if(mn<l && mx<=r)
c=mx-l;*/
c=r-l+1;
long long p=0,q=0;
if(l<=mn)
p=mn-l+1;
if(mx<=r)
p=r-mx+1;

c-=(p+q);
(c>0)?cout<<c:cout<<0;
cout<<endl;

}
