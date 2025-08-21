#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float i,r,n,p;

printf("enter p:");
scanf("%f",&p);
printf("enter r:");
scanf("%f",&r);
printf("enter n:");
scanf("%f",&n);
i=(p*r*n)/100;

printf("Interst is %f",i);

getch();
}