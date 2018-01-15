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
	long long l,r,g,c=0,i,j,f,la,e;
	cin>>l>>r>>g;
	
	
	for(i=l;i<=r;i++)
	if(i%g==0)
	{f=i;
	e=i;
	break;
	}
	for(i=r;i>=l;i--)
	if(i%g==0)
	{la=i;
	break;
	}
	if(g%2==0)
	e=2;
	//cout<<e<<endl;
	//cout<<f<<" "<<la<<endl;
	
	if(g>=l)
	{
		//c++;
		//cout<<"1"<<endl;
		for(i=f;i<=la;i+=e)
		{
			//cout<<i<<endl;
			for(j=f;j<=la;j+=e)
			{
				//cout<<j<<endl;
				//if(i==j && )
				//continue;
				
				if(GCD(i,j)==g)
				{
					c+=1;
					//cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
	else
	{
		//cout<<"2"<<endl;
		for(i=f;i<=la;i+=e)
		{
			for(j=f;j<=la;j+=e)
			{
				if(GCD(i,j)==g)
				{
					c+=1;
				//cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
	cout<<c<<endl;
	
	
	return 0;
}
