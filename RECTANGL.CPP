#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
   int a,l,b,p;
  printf("Enetr length");
  scanf("%d",&l);
   printf("enter breath:");
   scanf("%d",&b);
     a=l*l;
     printf("area is is %d",a);
     p=2*(l+b);
     printf("perimeter is %d",p);
     getch();
}