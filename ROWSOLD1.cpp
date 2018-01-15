/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define take(n,a)                   forall(i,0,n)cin>>a[i]
#define print(n,a)                  forall(i,0,n)cout<<a[i]<<" "
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	int l,i,c=0,z=0;
    	l=s.length();
    	int a[l]={0},b[l]={0};
    	for(i=l-1;i>=0;i--)
    	{
    		if(s[i]=='0')
    			z++;
    		else
    			a[i]=z;
    	}
        z=0;
        for(i=l-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                c+=z;
                b[i]=c;
                z=0;
            }
            else
            z=1;
        }
        //forall(i,0,l)
        //cout<<b[i]<<" ";
        //nl;
    	/*for(i=l-2;i>=0;i--)
        {
            if(s[i]=='1' && s[i+1]=='0')
            b[i]= ++c;
            else if(s[i]=='1')
                b[i]=c;
                //c++;
            //if(s[i]=='1')
              //  b[i]=c;
        }*/
        //if(s[0]=='1')
        //{
         //  b[0]=c;
        //}
    	ll ans=0;
    	forall(i,0,l)
    	{
    		ans+=a[i];
    		ans+=b[i];
    	}
    	cout<<ans<<endl;
    }
    return 0;
}