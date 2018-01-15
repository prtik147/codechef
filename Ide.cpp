#include<iostream>
using namespace std;

int count=0,n;

void tri(int a,int b,int c)
{
	if(a+b>c&&a+c>b&&b+c>a) count++;
}
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[10000000];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}

void divide(int *a,int l,int h,int x)
{int mid=(l+h)/2;
int z=count;
	if(a[mid]==x)
	{
		if(mid==0) tri(x,a[0],a[0+1]);
		else if(mid==n-1) tri(x,a[n-1],a[n-2]);
		else 
		{
		    tri(x,a[mid-1],a[mid+1]);
		    if(z==count&&mid+1!=n-1) tri(x,a[mid+1],a[mid+2]);
		    if(z==count&&mid-1!=0) tri(x,a[mid-1],a[mid-2]);
		}
		
	}
else if(h-l<=1)
{     z=count;
	tri(x,a[h],a[l]);
	if(z==count&&h!=n-1) tri(x,a[h],a[h+1]);
	if(z==count&&l!=0) tri(x,a[l],a[l-1]);
}
	
	else
	{
		if(x>a[mid])  divide(a,mid,h,x);
	
		else divide(a,l,mid,x);
	}
	
	
}
int main()
{
	int l,k,x;
	cin>>n>>l>>k;
	int a[n];
	for(x=0;x<n;x++) cin>>a[x];
	mergesort(a,0,n-1);
	for(x=l;x<=k;x++)
	{
		 divide(a,0,n-1,x);
	}
	cout<<count;
	
	
}