//SOURCE :->http://se7so.blogspot.in/2012/12/segment-trees-and-lazy-propagation.html
//TRYING TO CONTROL COMPLEXITY         :D
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
#define fin(i,a,b)               for(int i=a;i<b;i++)
#define fde(i,n,a)               for(int i=n;i>=a;i--)   
#define take(a,n)                   fin(i,0,n)cin>>a[i]
#define prs(a,n)                  fin(i,0,n)cout<<a[i]<<" "
#define prl(a,n)                  fin(i,0,n)cout<<a[i]<<endl
#define sqr(x)                   ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl
#define spc           cout<<" "
//source: http://se7so.blogspot.in/2012/12/segment-trees-and-lazy-propagation.html
int arr[2000005];
int tree[4000010];

void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}

void update_tree(int node, int a, int b, int i, int j, int value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node] += value;
    		return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

int query_tree(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return -1; // Out of range

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];

	int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = max(q1, q2); // Return final result
	
	return res;
}
//hold your horses here...
//you won't get another chance
int main() 
{
	ios::sync_with_stdio(false);
	int n,k,p,j,i,l,c=0,one=0;
	cin>>n>>k>>p;
	int a[n];
	take(a,n);
	fin(i,0,k)
	if(a[i]==1)
		c++;
	one=c;
	fin(i,k,n)
	if(a[i]==1)
		one++;
	//arr[n-1]=c;
	j=k;
	l=0;
	fin(i,0,2*n)
	{
		if(a[j]==1)
			c++;
		if(a[l]==1)
			c--;
		arr[i]=c;
		j++;
		l++;
		j%=n;
		l%=n;
	}
	//prs(arr,2*n);
	//nl;
	build_tree(1,0,2*n -1);
	//prs(tree,4*n);
	//nl;
	int cnt=0;
	while(p--)
	{
		char ch;
		cin>>ch;
		if(ch=='!')
			{
				cnt++;
				cnt%=n;
			}
		else
		{
			if(k>=n)
				cout<<one<<endl;
			else
			{int pps;
						pps=query_tree(1,0,2*n -1,n-1-cnt,n-cnt+n-k-1);
						cout<<pps<<endl;}
		}
	}


    return 0;
}
//    2b || !2b
//   that is the question....???