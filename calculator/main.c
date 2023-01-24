#include <stdio.h>
#include <stdlib.h>

int main()
{   char a;
   int c,b;
    printf("Enter A to add numbers\nEnter B to substract numbers\nEnter C to multiply numbers\nEnter D to divide numbers \n");
    printf("Enter your choice!\n");
    scanf("%c",&a);
    printf("Enter two number\n");
    scanf("%d%d",c,b);
    if(a=='A')
        printf("The addition of two number is %d",c+b);
    if(a=='B')
        printf("The substraction of second number from first is %d",c-b);
    if(a=='C')
        printf("The multiplication of two number is %d",c*b);
    if(a=='D')
        printf("The division of first number to second number is %d",c/b);
    return 0;
}
