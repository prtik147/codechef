#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int s,sg,fg,d,time;
    double speed,sgt,fgt;
    cin>>s>>sg>>fg>>d>>time;

    speed=s+(180*d)/time;
    sgt=abs(speed-sg);
    fgt=abs(speed-fg);

    if(sgt<fgt)
        cout<<"SEBI"<<endl;
    if(fgt>sgt)
        cout<<"FATHER"<<endl;
    if(sgt==fgt)
        cout<<"DRAW"<<endl;
}
return 0;
}
