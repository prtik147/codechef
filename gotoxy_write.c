for(i=1;i<=9;i++)
{
a[9]={'NULL','NULL','NULL','NULL','NULL','NULL','NULL','NULL','NULL','NULL'}
char n;
cout<<"enter the number"<<endl;
cin>>n;
if(n!='NULL')
cin>>n;
else
    {
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
}
