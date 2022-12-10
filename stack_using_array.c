#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
int stack[10];
void push();
void pop();
void display();
void main()
{
    int n=0;
    printf(" WELCOME TO STACK \n");
    printf(" press 1 to push\n");
    printf(" press 2 to pop\n");
    printf(" press 3 to display\n");
    printf(" press 4 to exit\n");
    while(n=4)

    {

     printf("Enter the operation to be performed: ");
     scanf("%d",&n);
     switch(n)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        default: printf("invalid input\n");
    }
    
    }
    getch();
}
void push()
{
    if(top==9)
        printf("Stack is full");
    else
    {
        printf("Enter the element: ");
        top++;
        scanf("%d",&stack[top]);
        printf("%d has been pushed to the stack\n",stack[top]);
    }
}
void pop()
{
    printf(" %d has been popped out of the stack\n",stack[top]);
    top--;
    if(top==-1)
        printf("Stack is empty");
}
void display()
{
    int i;
    printf(" STACK\n");
    for(i=top;i>=0;i--)
    {
        printf(" %d\n",stack[i]);
    }
    printf("----EXIT------");
    getch();
    exit(1);
}

