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
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl

int main() 
{
	//ios::sync_with_stdio(false);
	string s;
	int i,j,k,a,tr,h;
	 for(k=1;k<=11;k++)
	 {
	 	cout<<"? "<<k<<" 0"<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 a=2*(k-1);
	 
	 for(k=1;k<=11;k++)
	 {
	 	cout<<"? "<<k<<" "<<a<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 	tr=2*(k-1);
	 
	 for(k=1;k<=11;k++)
	 {
	 	cout<<"? "<<"0 "<<k+a<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	  h=(k-1);
	 int ans=(a*a)+(tr*h)/2;
	 cout<<"! "<<ans<<endl;

    return 0;
}