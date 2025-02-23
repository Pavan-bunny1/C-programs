//square user-defined
#include<stdio.h>
int square(int a);
main()
{
    int m,n;
    printf("enter the values of m:");
    scanf("%d",&m);
    n=square(m);
    printf("square of given number:%d is %d",m,n);
}
int square(int a)
{
    int b;
    b=a*a;
    return(b);
}
