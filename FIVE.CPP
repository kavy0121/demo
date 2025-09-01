#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0;
printf("enter the value:");
scanf("%d",&n);

for(int i=1;i<=n;i++)
 {
 if(i%5==0)
 {
 s=s+i;
 printf("%d\n",i);
 }

 }
 printf("sum is %d",s);
 getch();
}