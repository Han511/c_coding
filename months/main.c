#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the month number that you want\n");
    scanf("%d",&a);
    switch(a)
       {
       case 1:
        printf("30 days in January");
        break;
       case 2:
        printf(" 31 days in February");
         break;
       case 3:
           printf("31 days in March ");
            break;
       case 4:
           printf("30 days in April");
            break;
       case 5:
           printf("31 days in May");
            break;
       case 6:
           printf("31 days in June");
            break;
        case 7:
        printf("31 days in July");
         break;
         case 8:
             printf(" 31 days in August");
           break;
         case 9:
             printf("30 days in September");
             break;
        case 10:
            printf("31 days in October");
            break;
        case 11:
            printf(" 30 days in November");
            break;
        case 12:
            printf("31 days in  December");
            break;
        default:
            printf("Invalid Month");
             break;

       }
    return 0;
}
