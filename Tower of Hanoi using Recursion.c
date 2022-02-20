#include<stdio.h>
void movedisk(int n,char fromtower,char totower,char auxtower)
{
    if(n==1)
    {
        printf("Movedisk %d from %c to %c\n",n,fromtower,totower);
    }
    else
    {
        movedisk(n-1,fromtower,auxtower,totower);
        printf("Movedisk %d from %c to %c\n",n,fromtower,totower);
         movedisk(n-1,auxtower,totower,fromtower);
}
}
void main()
{
    int num;
    printf("Enter the number of disks:");
    scanf("%d",&num);
    movedisk(num,'S','D','I');
    printf("Note:\nS-Source\nD-Destination\nI-Intermediate");
}