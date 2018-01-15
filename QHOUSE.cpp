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
	int i,j,k,a;
	 for(i=1;i<=10;i+=1)
	 {
	 	cout<<"? "<<i*100<<" 0"<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 i--;
	 i*=100;
	 //i=MAX(0,i-100);
	 for(j=1;j<=10;j+=1)
	 {
	 	cout<<"? "<<i*100+j*10<<" 0"<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 j--;
	 j*=10;
	 //j=MAX(0,j-10);
	 for(k=1;k<=10;k++)
	 {
	 	cout<<"? "<<i*100+j*10+k<<" 0"<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 k--;
	 //k=MAX(0,k-1);
	 a=2*(i+j+k);
	 for(i=1;i<=10;i+=1)
	 {
	 	cout<<"? "<<i*100<<" "<<a<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 i--;
	 i*=100;
	 //i=MAX(0,i-100);
	 for(j=1;j<=10;j+=1)
	 {
	 	cout<<"? "<<i*100+j*10<<" "<<a<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 j--;
	 j*=10;
	 //j=MAX(0,j-10);
	 for(k=1;k<=10;k++)
	 {
	 	cout<<"? "<<i*100+j*10+k<<" "<<a<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 k--;
	 //k=MAX(0,k-1);
	 int tr=2*(i+j+k);
	 for(i=1;i<=10;i+=1)
	 {
	 	cout<<"? "<<"0 "<<i<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 i--;
	 i*=100;
	 //i=MAX(0,i-100);
	 for(j=1;j<=10;j+=1)
	 {
	 	cout<<"? "<<"0 "<<i*100+j*10<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 j--;
	 j*=10;
	 //j=MAX(0,j-10);
	 for(k=1;k<=10;k++)
	 {
	 	cout<<"? "<<" "<<i+j+k<<endl;
	 	fflush(stdout);
	 	cin>>s;
	 	if(s=="NO")
	 		break;
	 }
	 k--;
	 //k=MAX(0,k-1);
	 
	 int h=(i+j+k)-a;
	 int ans=(a*a)+(tr*h)/2;
	 cout<<"! "<<ans<<endl;

    return 0;
}