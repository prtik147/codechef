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
	long long l,r,g,i,c=0,j;
	long long a[100000],k=0;
	cin>>l>>r>>g;
	
	for(i=l;i<=r;i++)
	if(i%g==0)
	{
		a[k]=i;
		k++;
	}
	
	//vector<long long>::iterator j;
	//vector<long long>::iterator k;
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(GCD(a[i],a[j])==g)
			c++;
		}
	}
	cout<<c<<endl;
	
	
	return 0;
}
