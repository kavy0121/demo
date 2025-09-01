#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float n,s=0,m;
printf("enter the value:");
scanf("%f",&n);
 for(int i=0;i<=n;i++)
 {

   s=s+i;


 }
 printf("sum is %f\n",s);
 m=s/n;
 printf("mean is %f",m);
 getch();
}