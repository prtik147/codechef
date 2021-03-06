//source:  https://discuss.codechef.com/questions/17235/print-all-possible-subsequences-of-string-using-dynamic-programming
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


//#define MAX 20
ull n,cnt=0,k,j=0; // Number of elements in A
ll A[30];

void subsets(ll i,ull m)
{
  if(i==j)
    cnt++;
  else
  {
    ull ans=m,q;
    if(k/m >=A[i])
     {m*=A[i];
          subsets(i+1,m);}
    //if(ans<=k)
    subsets(i+1,ans);
    //if(m<=k && m>0)
   
  }

  
}
int main() 
{
  ios::sync_with_stdio(false);
  
  cin>>n>>k;
  int num=0,a[n];

  take(a,n);
  fi(i,0,n)
  {
    if(a[i]!=1)
    {
      A[j]=a[i];
      j++;
    }
    else
      num++;
  }

  if(j>=1)
  subsets(0,1);
  else
    cnt=2;
  ll ans=cnt-1;
//  prs(A,j);
  //val(ans);
  //val(num);
  while(num--)
  {
    ans*=2;
    ans+=1;
  }
  //val(ans);

  (j>=1)?cout<<ans :cout<<ans-1;
  nl;
    return 0;
}