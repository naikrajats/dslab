#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int stack[20];
int top=-1;
char postfix[20];

void push(int item)
{
    stack[++top]=item;
}

int pop()
{
    return (stack[top--]);
}


void postfixeval()
{
    int op1,op2,i=0;
    printf("\n enter the postfix expresion");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
            push(postfix[i]-'0');
        else
        {
            op1=pop();
            op2=pop();
            switch(postfix[i])
            {
                case '+':push(op1+op2);
                    break;
                case '-':push(op1-op2);
                    break;
                case '*':push(op1*op2);
                    break;
                case '/':push(op1/op2);
                    break;
                case '^':push(pow(op1,op2));
                    break;
            }
        }
    }
    printf("\nentered postfix expresion %s",postfix);
    printf("\n result:%d",stack[top]);

    


}
void main()
{
    postfixeval();
}