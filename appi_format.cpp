#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define max(a,b) ( (a) > (b) ? (a) : (b))
#define min(a,b) ( (a) < (b) ? (a) : (b))
#define s(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define sl(n) scanf("%lld",&n)
#define sf(n) scanf("%f",&n)
#define ss(n) scanf("%s",n)
#define p(n) printf("%d",n)
#define nl printf("\n")
#define cnl cout<<endl
#define forall(i,a,b) for(int i=a;i<b;i++)
#define fordec(i,a,b) for(int i=a;i>b;i--)
#define test int t;cin>>t;while(t--)
#define space printf(" ")
#define scan(x,i,n) for(int var=i;var<=n;var++) scanf("%d",&x[var])
#define print(x,i,n) for(int var=i;var<=n;var++) printf("%d ",x[var])
int main()
{
	test
	{
		int n,k,c=0;
		s(n);s(k);
		int arr[n+1];
		forall(i,1,n+1) arr[i]=0;
		forall(i,1,n+1)
		{
			int temp;
			s(temp);
			if(i==temp)
			arr[i]-=100;
			else
			arr[temp]++;
		}
		forall(i,1,n+1)
		{
			if(arr[i]>=k)
			c++;
		}
		p(c);nl;
	}

	return 0;
}
