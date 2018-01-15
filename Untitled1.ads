#include<iostream>
using namespace std;
int i = 200, n = 110;
main(){
int c=0;
  while (i >= n){
    i = i-1;
    n = n+1;
    c++;
  }
  cout<<c;
}
