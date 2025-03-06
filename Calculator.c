#include<stdio.h>
Main()
{
char ch;
int a,b;
printf("a.addition");
printf("b.substraction");
printf("c.multiplication");
printf("d.divdion");
printf("e.modules");
printf("enter your choice");
scanf("%c",&ch);
printf("enter your 1st and 2nd values");
scanf("%d%d",&a,&b);
switch(ch)
{
case'a':
printf("%d%d%d",a,b,a+b);
break;
case'b':
printf("%d%d%d",a,b,a-b);
break;
case'c':
printf("%d%d%d",a,b,a*b);
break;
case'd':
printf("%d%d%d",a,b,a/b);
break;
case'e':
printf("%d%d%d",a,b,a%b);
break;
default:
printf("invalid input");
break;
}
}





#include<stdio.h>
Main()
{
char ch;
int a,b;
printf("enter your arthm operator");
scanf("%c",&ch);
printf("enter your 1st and 2nd values");
scanf("%d%d",&a,&b);
switch(ch)
{
case'+':
printf("%d%d%d",a,b,a+b);
break;
case'-':
printf("%d%d%d",a,b,a-b);
break;
case'*':
printf("%d%d%d",a,b,a*b);
break;
case'/':
printf("%d%d%d",a,b,a/b);
break;
case'%':
printf("%d%d%d",a,b,a%b);
break;
default:
printf("invalid input");
break;
}
}
