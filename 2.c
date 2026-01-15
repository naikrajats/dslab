#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
char str[20], pat[20], res [20], replace [20];
int c=0,i=0,j=0,m=0,k,flag;

void stringmatch()
{
    while(str[c]!='\0')
    {
        
    }

}
void main()
{
    printf("\n enter the main string:");
    gets(str);
    printf("\n enter the pattern to be matched:");
    gets(pat);
    printf("\n enter the replacement string:");
    gets(replace);
    stringmatch();
    if(flag==0)
    {
        printf("\n pattern not found");
    }
    else
    {
        printf("\n the new string is : %s",res);
    }
}