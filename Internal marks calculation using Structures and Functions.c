#include<stdio.h>
struct student
{
    int rollno;
    char name[40];
    struct subject1
{
    int ut1,ut2,model;
}s1;
struct subject2
{
    int ut1,ut2,model;
}s2;
struct subject3
{
    int ut1,ut2,model;
}s3;
struct subject4
{
    int ut1,ut2,model;
}s4;
struct subject5
{
    int ut1,ut2,model;
}s5;
int im1,im2,im3,im4,im5;
}s[100];
void calculation(struct student stu[],int num);
void main()
{
    int i,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter rollno:");
        scanf("%d",&s[i].rollno);
        printf("Enter name:");
        scanf("%s",s[i].name);
        printf("Enter ut1,ut2 and model marks for subject1:");
        scanf("%d%d%d",&s[i].s1.ut1,&s[i].s1.ut2,&s[i].s1.model);
        printf("Enter ut1,ut2 and model marks for subject2:");
        scanf("%d%d%d",&s[i].s2.ut1,&s[i].s2.ut2,&s[i].s2.model);
        printf("Enter ut1,ut2 and model marks for subject3:");
        scanf("%d%d%d",&s[i].s3.ut1,&s[i].s3.ut2,&s[i].s3.model);
        printf("Enter ut1,ut2 and model marks for subject4:");
        scanf("%d%d%d",&s[i].s4.ut1,&s[i].s4.ut2,&s[i].s4.model);
        printf("Enter ut1,ut2 and model marks for subject5:");
        scanf("%d%d%d",&s[i].s5.ut1,&s[i].s5.ut2,&s[i].s5.model);
        calculation(s,n);
    }
}
void calculation(struct student stu[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        stu[i].im1=(stu[i].s1.ut1+stu[i].s1.ut2+stu[i].s1.model)/15;
        stu[i].im1=(stu[i].s2.ut1+stu[i].s2.ut2+stu[i].s2.model)/15;
        stu[i].im1=(stu[i].s3.ut1+stu[i].s3.ut2+stu[i].s3.model)/15;
        stu[i].im1=(stu[i].s4.ut1+stu[i].s4.ut2+stu[i].s4.model)/15;
        stu[i].im1=(stu[i].s5.ut1+stu[i].s5.ut2+stu[i].s5.model)/15;
    }
    for(i=0;i<num;i++)
    {
        printf("\n--------------------------Internal marks----------------------\n");
        printf("\nRoll number:%d\t\tName:%s\n\n",stu[i].rollno,stu[i].name);
        printf("\nSubjects\tUnit test-1\tUnit test-2\tMODEL EXAM\tInternal Marks\n\n");
        printf("Subject1:");
        printf("\t%d\t\t%d\t\t%d\t\t%d\n",stu[i].s1.ut1,stu[i].s1.ut2,stu[i].s1.model,stu[i].im1);
        printf("Subject2:");
        printf("\t%d\t\t%d\t\t%d\t\t%d\n",stu[i].s2.ut1,stu[i].s2.ut2,stu[i].s2.model,stu[i].im2);
        printf("Subject3:");
        printf("\t%d\t\t%d\t\t%d\t\t%d\n",stu[i].s3.ut1,stu[i].s3.ut2,stu[i].s3.model,stu[i].im3);
        printf("Subject4:");
        printf("\t%d\t\t%d\t\t%d\t\t%d\n",stu[i].s4.ut1,stu[i].s4.ut2,stu[i].s4.model,stu[i].im4);
        printf("Subject5:");
        printf("\t%d\t\t%d\t\t%d\t\t%d\n",stu[i].s5.ut1,stu[i].s5.ut2,stu[i].s5.model,stu[i].im5);
        printf("--------------------------------------------------------------\n");
    }
}