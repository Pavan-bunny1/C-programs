#include<stdio.h>
struct emp
{
int eid;
char ename[15];
float salary;
};
struct emp e1,e2;
main()
{
printf("enter eid");
scanf("%d",e1.eid);
printf("enter ename");
scanf("%s",e1.ename);
printf("enter salary");
scanf("%f",e1.salary);
printf("enter eid");
scanf("%d",e2.eid);
printf("enter ename");
scanf("%s",e2.ename);
printf("enter salary");
scanf("%f",e2.salary);
printf("employee information");
printf("\n empid %d",e1.eid);
printf("\n ename %s",e1.ename);
printf("\n salary %f",e1.salary);
printf("\n empid %d",e2.eid);
printf("\n ename %s",e2.ename);
printf("\n salary %f",e2.salary;
}
