#include<iostream>
using namespace std;
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
        //cout << N <<  is a prime number. << endl;
        return false;
    else
	return true;        
//cout << N <<  is not a prime number. << endl;
}
//O(sqrt(n))
//source codemonk

int main()
{
int i = 0, j = 0, k = 0;
int first ,last;
cin>>first>>last;
for (m = last; m >= first; m = m-1){
  k = k + m;
  if (composite(m)){
    i = i + m;
  }else{
    j = j + m;
  }
cout<<i<<" "<<j<<" "<<k<<endl;
}


}
