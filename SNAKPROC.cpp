#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define val(x)                  cout<<#x<<" "<<x<<endl;
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int l,c1=0,c2=0,i,in,h=0,t=0,v=0,y=2;
    	
    	cin>>l;
    	char s[l];
    	cin>>s;
    	//l=s.length();
    	while(v<l)
    	{
    		if(s[v]=='H')
    			{y=1;
    				break;}
 			if(s[v]=='T')
 				{y=0;
 					break;}
 			v++;

    	}

    	for(i=0;i<l;i++)
    	{
    		if(s[i]=='H')
    			{
    				h++;
    				if(c1==1)
    					break;
    				else
    				{c1=1;
    					c2=0;}
    			}
    		if(s[i]=='T')
    		{
    			t++;
    			if(c2==1)
    				break;
    			else
    			{c2=1;
    				c1=0;}
    		}
    	}
    	if(h==t)
    		in=1;
    	else
    		in=0;
    	/*for(i=0;i<(l-1);i++)
    	{
    		if(s[i]=='T' && s[i+1]=='.')
    			break;
    	}*/
    	/*if(in==1 && i==l && y==1)
    		cout<<"valid"<<endl;
    	else
    		cout<<"invalid"<<endl;*/
    	if(y==2)
    	{
    		if(in==1 && i==l)
    			cout<<"valid"<<endl;
    		else
    		cout<<"invalid"<<endl;
    	}
    	else
    	{
    		if(in==1 && i==l && y==1)
    		cout<<"valid"<<endl;
    		else
    		cout<<"invalid"<<endl;
    	}
    }
    return 0;
}