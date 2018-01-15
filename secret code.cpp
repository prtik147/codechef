#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <utility>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define val(x)                  cout<<#x<<" "<<x<<endl;
#define f(i,a,b)               for(i=a;i<b;i++)
#define fi(i,a,b)               for(int i=a;i<b;i++)
#define fd(i,n,a)               for(int i=n;i>=a;i--)
#define take(a,n)                   fi(i,0,n)cin>>a[i]
#define prs(a,n)                  fi(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fi(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define all(x) x.begin(),x.end()
#define fr                    first
#define se                    second
#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod                   1000000007
#define PI                    3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "
bool checkprime(int N) {
    int count = 0;
    for( int i = 1;i * i <=N;++i ) {
         if( N % i == 0) {
         if( i * i == N )
                     count++;
                 else                                                     // i < sqrt(N) and (N / i) > sqrt(N)
                     count += 2;
      }
    }
    if(count == 2)
        //cout << N << “ is a prime number.” << endl;
        return false;
    else
	return true;        
//cout << N << “ is not a prime number.” << endl;
}
//O(sqrt(n))
//source codemonk
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}
 
// The main function that prints the arrangement with the largest value.
// The function accepts a vector of strings
void printLargest(vector<string> arr)
{
    // Sort the numbers using library sort funtion. The function uses
    // our comparison function myCompare() to compare two strings.
    // See http://www.cplusplus.com/reference/algorithm/sort/ for details
    sort(arr.begin(), arr.end(), myCompare);
 
    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
        cout<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<string> v;
    	for(int i=0;i<n;i++)
    	{
    		string s;
    		cin>>s;
    		//val(s);
    		ll num=0,c=1;
    		for(int j=s.length()-1;j>=0;j--)
    		{
    			num+=(s[j]-48)*c;
    			c*=10;
    		//	val(num);
			}
			//cout<<num<<" ";
			//num=int(s);
			if(checkprime(num))
			v.pb(s);
		}
    	if(v.empty())
    	cout<<"No Secret Code!"<<endl;
    	else
    	{
    		printLargest(v);
		}
    }
    return 0;
}

