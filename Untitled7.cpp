#include<bits/stdc++.h>
using namespace std;


int checkprime(int N) {
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
        return 1;
    else
        return 0;
}



int main()
{
	int n;
	int t,i; 
	cin>>n>>t;
	int a[n+1][2];
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i][0];
		a[i][1]=checkprime(a[i][0]);
	}
	
	while(t--)
	{
		int x,y,z,c=0;
		cin>>x;
		if(x==1)
		{
			cin>>y>>z;
			for(i=y;i<=z;i++)
			if(a[i][1]==1)
			c++;
			
			cout<<c<<endl;
		}
		else if(x==2)
		{
			cin>>y>>z;
			a[y][0]=y;
			a[y][1]=checkprime(z);
		}
		
	}
	return 0;
}






