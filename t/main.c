#include <stdio.h>
#include <stdlib.h>

int main()
{  int sec,h,m,s;
    printf("Enter the number of second\n");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec%3600)/60;
    s=sec-(h*3600)-(m*60);
    printf("The given time will %d:%d:%d",h,m,s);
    return 0;
}
