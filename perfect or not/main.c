#include<stdio.h>
#include<conio.h>
int main()
{
 int n, i, sum=0;
 printf("Enter the value of n:");
 scanf("%d", &n);

 for(i=1; i<n; i++)
 {
   if(n%i==0)
   {
     sum=sum+i;

   }
 }
 if(sum==n)
 {
 printf("%d is the perfect number",n);
 }
 else
 {
 printf("%d is the not perfect number",n);
 }

return 0;
}
