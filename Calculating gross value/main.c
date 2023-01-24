#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c,d;
    printf("Enter basic salary!\n");
    scanf("%d",&a);
    if(a<=10000)
       {b=0.2*a;
       c=0.8*a;
       d=a+b+c;
         printf("The gross value of employee is %d",d);
      }
    else if(a>10000&&a<=20000)
        {b=0.25*a;
        c=0.9*a;
        d=a+b+c;
         printf("The gross value of employee is %d",d);
        }

     else if(a>20000&&a<=30000)
       {
        b=0.3*a;
        c=0.95*a;
        d=a+b+c;
         printf("The gross value of employee is %d",d);
        }
        else
        {printf("Wrong input");}

    return 0;
}
