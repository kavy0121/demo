#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,r;
printf("Enter A:");
scanf("%d",&a);
printf("Enter B:");
scanf("%d",&b);

r=a+b;
printf("ADD of a and b is %d \n",r);
r=a-b;
printf("subb of a and b is %d \n",r);
r=a*b;
printf("multi of a and b is %d \n",r);
r=a/b;
printf("div  of a and b is %d \n",r);
getch();
}