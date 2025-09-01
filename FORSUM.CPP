#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0;
printf("enter the value:");
scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {

   s=s+i;


 }
 printf("sum is %d",s);
 getch();
}