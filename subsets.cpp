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
int n; // Number of elements in A
int A[20];
bool V[20];

void subsets(int i)
{
  if (i == n) {
    for (int j = 0; j < n; j++)
      if (V[j])
        printf("%d ", A[j]);
    printf("\n");
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
  //int n=5;
 // A={1,2,3,4,5};
  A[0]=1;
  A[1]=2;
  A[2]=3;
n=3;
  subsets(0);
    return 0;
}