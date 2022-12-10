#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enque();//insertion
void deque();//deletion
void display();
void main()
{
    int n;
    printf("WELCOME TO QUEUE\n");
    printf("PRESS 1 to ENQUE\n");
    printf("PRESS 2 to DEQUE\n");
    printf("PRESS 3 to DISPLAY\n");
    printf("PRESS 4 To EXIT\n");
    while(n!=4)
    {
        printf("Enter the operation to be performed: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: enque();
                    break;
            case 2: deque();
                    break;
            case 3: display();
                    break;
            default: printf("Invalid operation.\n");
        }
    }
}
void enque()
{

    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to enque: ");
    scanf("%d",&p->info);
    p->next=NULL;
    if(rear==NULL)
        front=rear=p;
    else
    {
        p->next=rear;
        rear=p;
    }
}
void deque()
{
    struct node *pt=front;
    struct node *p=rear;
    if(front==NULL)
        printf("Underflow\n");
    else if(front==rear)
    {
        front=rear=NULL;
        free(pt);
        printf("Element dequeued.\n");
    }
    else
    {
        while(p->next!=front)
            p=p->next;
        front=p;
        p->next=NULL;
        free(pt);
        printf("Element dequeued.\n");

    }
}
void display()
{
    struct node *p=rear;
    if(rear!=NULL)
    {
        while(p!=NULL)
        {
            printf("%d\t",p->info);
            p=p->next;
        }
    }
    else
        printf("QUEUE IS EMPTY\n");

    return;
}
