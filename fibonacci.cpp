#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    long ans;
    double a=1.61803398,b=-0.61803398;
    cout<<"enter the no of fibonacci";
    cin>>n;
    ans=pow(1.61803398,n-1)+pow(-0.61803398,n-1);
    cout<<ans/2;


    return 0;
}
