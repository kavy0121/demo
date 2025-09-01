#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=1;
printf("enter the value:");
scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {

   s=s*i;


 }
 printf("factorial is %d",s);
 getch();
}