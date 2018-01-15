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
ull n,cnt=0,k; // Number of elements in A
ll A[30];
bool V[30];

void subsets(ll i)
{
  ull ans=1,j;
  if (i == n) {
    for (j = 0; j < n; j++)
    if (V[j])
    {ans*=A[j];
      if(ans<0 || ans>k)
        break;}

      if(ans<=k || ans<0)
        cnt++;
  } else {
    // Each element of the original set may be or not in the subsets
    // Since each element has two options the total number subsets is:
    // 2 * 2 * 2 * ... * 2 = 2^n
    // -------------------------
    // 1   2   3   ...   n

    V[i] = true;      // This element will be in the subset
    subsets(i + 1);
    V[i] = false;     // This element won't be in the subset
    subsets(i + 1);
  }
}
int main() 
{
  ios::sync_with_stdio(false);
  
  cin>>n>>k;
  int num=0,a[n],j=0;

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

  subsets(0);
  ll ans=cnt-1;
  while(num--)
  {
    ans*=2;
    ans+=1;
  }
  cout<<ans<<endl;
    return 0;
}