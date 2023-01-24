#include<stdio.h>
#include<conio.h>
int main()
{
 int x, y, i, r=1, t;

 printf("Enter the number:");
 scanf("%d", &x);
 printf("Enter the power of the number:");
 scanf("%d", &y);

 for(i=1; i<=y; i++)
 {
   t=x;
   r=r*t;
 }
 printf("Result : %d", r);
 return 0;
}
