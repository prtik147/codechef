#include<cstdio>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
void hline(int x1,int x2,int y)
{
  int i;
  for(i=x1;i<=x2;i++)
  {
    gotoxy(i,y);
    printf("%c",196);
  }
}
void vline(int y1,int y2,int x)
{
  int i;
  for(i=y1;i<=y2;i++)
  {
    gotoxy(x,i);
    printf("%c",179);
  }
}
/*void rect(int x,int y)
{
    gotoxy(x,y);
    //cout<<"lund";
    hline(x-2,x+2,y-2);
	hline(x-2,x+2,y+2);
	vline(y-2,y+1,x-2);
	vline(y-2,y+1,x+2);
}*/

void rect(int x,int y)
{
  /*printing corners*/

  int x1,y1,x2,y2;
  x1=x-2;
  x2=x+2;
  y1=y-1;y2=y+1;
  gotoxy(x2,y1);
  printf("%c",191);
  gotoxy(x1,y2);
  printf("%c",192);
  gotoxy(x2,y2);
  printf("%c",217);
  gotoxy(x1,y1);
  printf("%c",218);
  /* printing lines */
  hline(x1+1,x2-1,y1);
  hline(x1+1,x2-1,y2);
  vline(y1+1,y2-1,x1);
  vline(y1+1,y2-1,x2);
}
void cross(int x,int y)
{
  /*printing corners*/

  int x1,y1,x2,y2;
  x1=x-2;
  x2=x+2;
  y1=y-1;y2=y+1;
  /*printing lines*/
  hline(x1,x2,y);
  vline(y1,y2,x);
}
int a[10]={0,0,0,0,0,0,0,0,0,0};
int main()
{
    int i;
    for(i=1;i<=9;i++)
{

int n,z=10;
gotoxy(50,0);
cin>>n;


while(a[n]!=0)
    {
    cin>>n;
    //cout<<"check";
    }

    if(i%2==0)
    {
    a[n]=3;
    }
    else{
    a[n]=2;
    }
    for(z=1;z<=9;z++)
 cout<<a[i]<<" ";

        switch(n)
        {
        case 1:
            if(i%2!=0)
                cross(5,17);
            else
                rect(5,17);
            break;

        case 2:
            if(i%2!=0)
                cross(17,17);
            else
                rect(17,17);
                break;
        case 3:
             if(i%2!=0)
                cross(29,17);
            else
                rect(29,17);
                break;
        case 4:
            if(i%2!=0)
                cross(5,10);
            else
                rect(5,10);
                break;
        case 5:
             if(i%2!=0)
                cross(17,10);
            else
                rect(17,10);
                break;
        case 6:
             if(i%2!=0)
                cross(29,10);
            else
                rect(29,10);
                break;
        case 7:
             if(i%2!=0)
                cross(5,3);
            else
                rect(5,3);
                break;
        case 8:
             if(i%2!=0)
                cross(17,3);
            else
                rect(17,3);
                break;
        case 9:
            if(i%2!=0)
                cross(29,3);
            else
                rect(29,3);
                break;
        }

    /* rect(5,3);
	rect(29,3);
	rect(17,10);
	rect(5,17);
	rect(29,17);
	cross(17,3);
	cross(5,10);
	cross(29,10);
	cross(17,17);*/

    hline(0,35,6);
	hline(0,35,14);
	vline(0,20,11);
	vline(0,20,24);

}
   	return 0;
}
