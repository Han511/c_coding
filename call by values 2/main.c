#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping values in function a=%d,b=%d\n",a,b);
}
int main()
{
     printf("NAME:HANA ALEBACHEW MENGIST\nROLL NO.:92000103161\nCLASS: TC4\n\n");
    int a=10;
    int b=20;
    printf("Before swapping the values in main a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("After swapping the values in main a=%d,b=%d\n",a,b);

}
