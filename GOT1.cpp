#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100002];
    cin>>s;
    int a[26]={0},i,l,o=0,e=0;
    l=strlen(s);
    for(i=0;i<l;i++)
        a[s[i]-97]++;

    for(i=0;i<26;i++)
    if(a[i]%2==0)
    e++;
    else
    o++;

    if(o==0 && l%2==0)
    cout<<"YES"<<endl;
    else if(o==1 && l%2!=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;



    return 0;
}
