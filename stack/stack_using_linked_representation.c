#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node *top=NULL;
void push();
void pop();
void display();
void main()
{
    int n;
    printf("WELCOME TO STACK\n");
    printf("Press 1 to push\n");
    printf("Press 2 to pop\n");
    printf("Press 3 to display\n");
    printf("Press 4 to exit\n");
    fflush(stdin);
    while(n!=4)
       {
            printf("Enter the operation to be performed:");
            scanf("%d",&n);
            switch(n)
            {
                case 1: push();
                        break;
                case 2: pop();
                        break;
                case 3: display();
                        break;
               default: printf("Invalid operation\n");
            }
       }
}
void push()
{
    struct node *p=NULL;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be pushed: ");
    scanf("%d",&p->info);
    printf("\n");
    p->next=NULL;
    if(top!=NULL)
        p->next=top;
    top=p;

    return;
}
void pop()
{
    int x;
    if(top==NULL)
        {
            printf("\n");
            printf("Underflow\n");
        }
    else
    {
        struct node *p=NULL;
        x=top->info;
        p=top;
        top->next;
        free(p);
        printf("%d popped out\n",x);
    }
}
void display()
{
    struct node* p=top;
    while(p!=NULL)
    {
        printf("%d\n",p->info);
        p=p->next;
    }
}
