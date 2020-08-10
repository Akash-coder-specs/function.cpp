#include<conio.h>
#include<iostream.h>
int fun(int x=0,int y=0,int z=0)
{
return(x+y+z);
}
void main()
{
clrscr();
cout<<fun(10,20,30);
getche();
}