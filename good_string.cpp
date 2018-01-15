#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[100003];
	cin>>a;
	int arr[26]={0},i,c=0;
	for(i=0;i<a[i];i++)
	arr[a[i]-97]++;
	
	
	//for(i=0;i<26;i++)
	//cout<<arr[i]<<" ";
	
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		c+=(arr[i]-1);
	}
	
	cout<<c<<endl;
	
	return 0;
}
