#include<stdio.h>
#include<stdlib.h>
void conversion(int num,int base)
{
    int remainder=num%base;
    if(num==0)
    {
        return;
    }
    conversion(num/base,base);
    if(remainder<10)
    {
        printf("%d",remainder);
    }
    else
    {
        printf("%c",remainder-10+'A');
    }
}
void main()
{
    int num,choice;
    printf("\nEnter a positive decimal number:\t");
    scanf("%d",&num);
    while(1)
    {
        printf("\n1.Decimal to Binary Conversion");
        printf("\n2.Decimal to Octal Conversion");
        printf("\n3.Decimal to Hexadecimal Conversion");
        printf("\n4.Quit");
        printf("\nEnter your option:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nBinary value:\t");
            conversion(num,2);
            break;
            case 2:printf("\nOctal value:\t");
            conversion(num,8);
            break;
            case 3:printf("\nHexadecimal value:\t");
            conversion(num,16);
            break;
            case 4:exit(0);
            default:printf("Enter a correct input\n");
            break;
        }
    }
    printf("\n");
}