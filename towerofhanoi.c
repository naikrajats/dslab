#include<stdio.h>
void towerofhanoi(int,char,char,char);

void main()
{
    int n;
    printf("\nEnter the number of disk");
    scanf("%d",&n);
    towerofhanoi(n,'S','D','T');
}

void towerofhanoi(int n,char source,char dest,char temp)
{
    if(n==1)
    {
        printf("\nMOVE disc 1 from %c to %c",source,dest);
            return;
        
    }
    else
    {
        towerofhanoi(n-1,source,temp,dest);
        printf("\nMOVE disc %d from %c to%c ",n,source,dest);
        towerofhanoi(n-1,temp,dest,source);
    }
}