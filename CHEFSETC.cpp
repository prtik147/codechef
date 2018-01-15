#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[4],i;
		for(i=0;i<4;i++)
		cin>>a[i];
		
		int arr[16];
		arr[0]=a[0];
		arr[1]=a[1];
		arr[2]=a[2];
		arr[3]=a[3];
		
		arr[4]=a[0]+a[1];
		arr[5]=a[0]+a[2];
		arr[6]=a[0]+a[3];
		
		arr[7]=a[1]+a[2];
		arr[8]=a[1]+a[3];
		
		arr[9]=a[2]+a[3];
		
		arr[10]=a[0]+a[1]+a[2];
		arr[11]=a[0]+a[1]+a[3];
		arr[12]=a[0]+a[2]+a[3];
		arr[13]=a[1]+a[2]+a[3];
		
		arr[14]=a[0]+a[1]+a[3]+a[2];
		
		if(arr[0]==0||arr[1]==0||arr[2]==0||arr[3]==0||arr[4]==0||arr[5]==0||arr[6]==0||arr[7]==0||arr[8]==0||arr[9]==0||arr[10]==0||arr[11]==0||arr[12]==0||arr[13]==0||arr[14]==0)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
	}
	return 0;
}
