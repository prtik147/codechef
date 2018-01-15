#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long l=s.length(),ans=0;
        int a[l][2],cv=0,cc=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
            cv++;
            else
            cc++;
            a[i][0]=cv;
            a[i][1]=cc;
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
            ans+=a[i][1];
            else
            ans+=a[i][0];
        }
        cout<<ans<<endl;
    }
    return 0;
}

