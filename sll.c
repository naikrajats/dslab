#include<stdio.h>
#include<stdlib.h>

struct node
{
    char usn[10];
    char name[10];
    char branch[10];
    int sem;
    char pno[10];
    struct node* next;
};
struct node* start=NULL;
struct node* temp, *p, *q;

void createnode()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter USN, Name, Branch, Sem, Phone Number:\n");
    scanf("%s %s %s %d %s",temp->usn,temp->name,temp->branch,&temp->sem,temp->pno);
    temp->next=NULL;
}

void insertfront()
{
    createnode();
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}

void insertend()
{
    createnode();
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;   
    }
}
void deletefront()
{
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        q=start;
        start=start->next;
        printf("student deleted\n%s", q->usn);
        free(q);
    }
}
deleteend()
{
    if(start==NULL)
        printf("List is empty\n");
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            p=q;
            q=q->next;

        }
        p->next=NULL;
        printf("student deleted\n%s", q->usn);
        free(q);

    }
}
void display()
{
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
      for(q=start;q!=NULL;q=q->next)
      {
          printf("%s %s %s %d %s\n",q->usn,q->name,q->branch,q->sem,q->pno);
      }
    }
}

int main()
{
    int choice,n;
    while(1)
    {
        printf("_____single linked list ______\n");
        printf("1.create\n2.insert front\n3.insert end\n4.delete front\n5.delete end\n6.display\n7.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("number of students");
                   scanf("%d",&n);
                   for(int i=0;i<n;i++)
                   {
                       insertend();
                   }
                   break;
            case 2:insertfront();
                   break;
            case 3:insertend();
                     break;
            
            case 4:deletefront();
               break;
            case 5:deleteend();
                    break;
            case 6:display();
                    break;
            case 7:exit(0);
                    break;
            default:printf("invalid choice\n");
        }
    }
    return 0;
}