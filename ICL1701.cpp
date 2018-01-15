/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
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
	int n,k,i,c=0;
	cin>>n>>k;
	int a[n][2];
	forall(i,0,n)
	{
		cin>>a[i][0];
		if(a[i][0]<0)
			{
				c++;
		
			}
			a[i][1]=c;
	}
	/*if(c%2!=0)
	{
		cout<<"0"<<endl;
		return 0;
	}*/
	vector<int> v;
	int ans=0;
	forall(i,0,n)
	{
		//cout<<a[i][1]<<" ";
		if(a[i][1]%2==1)
		{
			v.push_back(i+1);
			a[i+1][0]=-1;
			ans++;
		}
	}
	cout<<ans<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";


    return 0;
}