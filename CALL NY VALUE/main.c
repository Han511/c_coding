#include <stdio.h>
#include <stdlib.h>



void change(int num)
    {
        printf("Before adding value inside function name=%d\n",num);
        num=num+100;
       printf("After adding value inside function name=%d\n",num);

    }
int main()
    {
        printf("NAME:HANA ALEBACHEW MENGIST\nROLL NO.:92000103161\nCLASS: TC4\n\n");
        int x=100;
        printf("Before function call x=%d\n",x);
        change(x);
        printf("After function call x=%d\n",x);

    return 0;
   }
