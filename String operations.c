#include<stdio.h>
#include<string.h>
#include<ctype.h>
void replace(char*,char*,char*);

void main()
{
    char paragraph[200]="The quick brown fox\njumps over\nthe lazy dog.";
    char old[10]="The",S[10]="THat";
    char word[30],c;
    
    int i=0,j=0,count=0;
    printf("*****Given paragraph******\n");
    printf("%s\n",paragraph);
    printf("**************************************\n");
    while(paragraph[i]!='\0')
    {
        word[j++]=paragraph[i++];
        if(paragraph[i]=='\t'||paragraph[i]=='\n')
        {
            j=0;
            count++;
            paragraph[i+1]=toupper(paragraph[i+1]);
        }
    }
    printf("No of words:%d\n",count);
    printf("****************************\n");
    printf("Capitalize each word\n");
    printf("****************************\n");
    printf("%s\n",paragraph);
    printf("****************************\n");
    printf("Replace%s with %s\n\n",old,S);
    printf("****************************\n");
    replace(paragraph,old,S);
    printf("%s\n",paragraph);
}
void replace(char*str,char*s_string,char*r_string)
{
    char buffer[200];
    char*ch;
  
    if(!(ch=strstr(str,s_string)))return;
       strncpy(buffer,str,ch-str);
       
       buffer[ch-str]=0;
       
       sprintf(buffer+(ch-str),"%s%s",r_string,ch+strlen(s_string));
       
       str[0]=0;
       strcpy(str,buffer);
       return replace(str,s_string,r_string);
}