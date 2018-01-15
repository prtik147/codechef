/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <queue>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))

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
#define fi first
#define se second
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
		int n,i;
    cin>>n;
    int ar[n],s[n+1]={0},num;
    //list<int> l[n];
    s[0]=1;
    queue<int> q;
    forall(i,0,n)
    cin>>ar[i];

    	q.push(1);
    	s[1]=1;
    	q.push(ar[0]);
    	s[ar[0]]=1;
    	while(!q.empty())
    	{
    		num=q.front();
    		q.pop();
    		if((num+1)<=n)
    		if(s[num+1]==0   )
    		{
    			q.push(num+1);
    			s[num+1]=s[num]+1;
    		}
    		if(num+ar[num]<=n &&num<=n)
    		if(s[num+ar[num]]==0 )
    		{
    			q.push(num+ar[num]);
    			s[num+ar[num]]=s[num]+1;
    		}
    		if(s[n]!=0)
    			break;

    	}
    	cout<<s[n]<<endl;
	}

    return 0;
}