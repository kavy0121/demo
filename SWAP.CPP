#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("new value of a is %d",a);
printf("new value of b is %d",b);
getch();
}