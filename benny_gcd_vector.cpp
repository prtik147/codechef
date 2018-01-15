#include<bits/stdc++.h>
using namespace std;
long long GCD(long long A, long long B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
//euclid algorithm
//source codemonk
int main()
{
	long long l,r,g,i,c=0;
	vector<long long> v;
	cin>>l>>r>>g;
	
	for(i=l;i<=r;i++)
	if(i%g==0)
	v.push_back(i);
	
	vector<long long>::iterator j;
	vector<long long>::iterator k;
	
	for(k=v.begin();k!= v.end();k++)
	{
		for(j=v.begin();j!= v.end();j++)
		{
			if(GCD(*k,*j)==g)
			c++;
		}
	}
	cout<<c<<endl;
	
	
	return 0;
}
