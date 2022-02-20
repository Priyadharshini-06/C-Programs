#include<stdio.h>
struct employee
{
    int empid;
    char empname[30];
    int basic;
    float hra,da,ma;
    float pf,lic;
    float dd,gs,ns;
}e[100];
void main()
{
    int i,n;
    struct employee *p;
    p=e;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee id:");
        scanf("%d",&(p+i)->empid);
        printf("Enter employee name:");
        scanf("%s",&(p+i)->empname);
        printf("Enter employee basic pay:");
        scanf("%d",&(p+i)->basic);
    }
    for(i=0;i<n;i++)
    {
        (p+i)->hra=(p+i)->basic*5/100;
        (p+i)->da=(p+i)->basic*4/100;
        (p+i)->ma=(p+i)->basic*3/100;
        (p+i)->pf=(p+i)->basic*3/100;
        (p+i)->lic=(p+i)->basic*2/100;
        (p+i)->gs=(p+i)->basic+(p+i)->hra+(p+i)->da+(p+i)->ma;
        (p+i)->dd=(p+i)->pf+(p+i)->lic;
        (p+i)->ns=(p+i)->gs-(p+i)->dd;
    }
    for(i=0;i<n;i++)
    {
        printf("----------------------EMPLOYEE DETAILS------------------\n");
printf("empid=%d\nempname=%s\nempgs=%f\nempdd=%f\nempns=%f\n",(p+i)->empid,(p+i)->empname,(p+i)->gs,(p+i)->dd,(p+i)->ns);
printf("--------------------------------------");
    }
}