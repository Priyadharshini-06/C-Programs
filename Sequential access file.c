#include<stdio.h>
#include<stdlib.h>
struct acc
{
    int number;
    char name[30];
    double balance;
};
void insert();
void count(float);
void main()
{
    int choice;
    float minBal=5000.00;
    while(1)
    {
        printf("\n1.insert records\n");
        printf("2.count min balance holders\n");
        printf("3.exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();break;
            case 2:count(minBal);break;
            case 3:printf("Exit");exit(0);
            default:printf("Enter correct option");
            break;
        }
    }
}
void insert()
{
    FILE *fp;
    struct acc account;
    int records;
    fp=fopen("clients.txt","w");
    if(fp==NULL)perror("Error opening file");
    printf("How many records?");
    scanf("%d",&records);
    puts("\nEnter the account number,name and balance\n");
    printf("***************************************\n");
    while(records>0)
    {
        printf("\nEnter record:");
        scanf("%d%29s%lf",&account.number,account.name,&account.balance);
        fprintf(fp,"%d%s%.2f\n",account.number,account.name,account.balance);
        records--;
    }
    fclose(fp);
}
void count(float minBal)
{
    FILE *fp;
    struct acc account;
    int count=0;
    fp=fopen("clients.txt","r");
    if(fp==NULL)perror("Erroe opening file");
    printf("\nThe account holders whose balance is less than the minimum balance\n");
    printf("AccNumber AccountHolderName Balancne\n");
    printf("**********************************************\n");
    fscanf(fp,"%d%29s%lf",&account.number,account.name,&account.balance);
    while(!feof(fp))
    {
        if(account.balance<minBal)
        {
            printf("%-10d%-13s%7.2f\n",account.number,account.name,account.balance);
            count++;
            fscanf(fp,"%d%29s%lf",&account.number,account.name,&account.balance);
        }
        printf("\nNumber of accounts:");
        printf("%d\n",count);
        fclose(fp);
}
}