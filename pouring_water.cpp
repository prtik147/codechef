#include <iostream>
using namespace std;
 
int geta(int a, int b, int c)
{
	int i,x,temp;
	for(i = 0; ;i++)
	{
		temp = c+b*i;
		if(temp%a == 0)
		{
			x = temp/a;
			break;
		}
	}
	if(c<a)
	x--;
	return x+i;
}
 
int getb(int a, int b, int c)
{
	int i,y,temp;
	for(i = 0; ;i++)
	{
		temp = c+a*i;
		if(temp%b == 0)
		{
			y = temp/b;
			break;
		}
	}
	if(c<b)
	y--;
	return y+i;
}
 
int main()
{
long int t,b,c,a;
 
    cin>>t;
    while(t--)
    {
	    cin>>a>>b>>c;
	    if(c>max(a,b))
	    {
	        cout<<"-1 ";continue;
	    }
	    if(c==0)
	    {
	        cout<<"0 ";continue;
	    }
	    if(c==a || c==b)
	    {
	        cout<<"1 ";continue;
	    }
	    int g=__gcd(a,b);
	    if(c%g!=0)
	    {
	        cout<<"-1 "<<endl;continue;
	    }
	    cout<<min(geta(a,b,c),getb(a,b,c))*2<<endl;
    }
}
