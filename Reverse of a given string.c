#include<stdio.h>
#include<string.h>
int isAlpha(char);
void main()
{
    char str[100];
    void reverse(char*);
    void swap(char*a,char*b);
    printf("Enter the string:");
    gets(str);
    reverse(str);
    printf("Reverse string:%s\n",str);
}
void swap(char*a,char*b)
{
    char t;
    t=*a;
    *a=*b;
    *b=t;
}
void reverse(char str[100])
{
    int r=strlen(str)-1,l=0;
    while(1<r)
    {
        if(!isAlpha(str[r]))
        l++;
        else if(!isAlpha(str[r]))
        r--;
        else
        {
            swap(&str[1],&str[r]);
            l++;
            r--;
    }
}
}
int isAlpha(char x)
{
    return((x>='A'&&x<='Z')||(x>='a'&&x<='z'));
}