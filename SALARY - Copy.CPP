#include<stdio.h>
#include<conio.h>
void main()
{
int ns,gs,all,ded;
all=0.1*gs;
ded=0.03*gs;
printf("enter gross salary");
scanf("%d",&gs);
ns=gs+all-ded;

printf("net salary is %d",ns);
getch();
}