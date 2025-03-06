#include<stdio.h>
struct emp
{
int eid;
char ename[15];
float salary;
};
struct emp e[5];
main()
{
int i;
for(i=0;i<5;i++)
{
printf("enter eid");
scanf("%d",e[i].eid);
printf("enter ename");
scanf("%s",e[i].ename);
printf("enter salary");
scanf("%f",e[i].salary);
}
for(i=0;i<5;i++)
{
printf("employee information");
printf("\n empid %d",e[i].eid);
printf("\n ename %s",e[i].ename);
printf("\n salary %f",e[i].salary);
}
}
