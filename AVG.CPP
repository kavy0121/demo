#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
   float a,b,c,t,avg;
  printf("Enetr marks of sci");
  scanf("%f",&a);
  printf("enter marks of maths");
  scanf("%f",&b);
  printf("enter the marks of history");
  scanf("%f",&c);
     t=a+b+c;
     printf("total is is %f",t);
     avg=t/3;
     printf("avg is %f",avg);

     getch();
}