#include<stdio.h>
struct calender
{
    int date;
    char *activity;
    char *day;
     
};
struct calender *c;
int i;
void create()
{
    c=(struct calender*)malloc(sizeof(struct calender));
}
void read()
{   
    char buffer[20];
    for(i=0;i<7;i++)
    {
        printf("Enter the week day");
        scanf("%s",buffer);
        (c+i)->day=(char*)malloc((strlen(buffer)+1)*sizeof(char));
        strcpy((c+i)->day,buffer);
        printf("Enter the date");
        scanf("%d",&(c+i)->date);
        printf("Enter the activity");
        scanf("%s",buffer);
        (c+i)->activity=(char*)malloc((strlen(buffer)+1)*sizeof(char));
        strcpy((c+i)->activity,buffer);
    }
}
void display()
{   
    printf("\n CALENDER DETAILS");
    printf("\n weekday \t date \t activity\n");
    for(i=0;i<7;i++)
    {
        printf("%s \t %d \t %s\n",(c+i)->day,(c+i)->date,(c+i)->activity);
    }
}
void main()
{
    create();
    read();
   display();
   free(c);
}