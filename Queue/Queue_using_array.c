#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Q[10];
int front=-1,rear=-1;
void enque();
void deque();
void display();
int main()
{
    int ch=0;
    while(ch=4)
    {
        printf("\nHere is your queue\n");
        printf("Press 1 to enque\n");
        printf("Press 2 to deque\n");
        printf("Press 3 to display\n");
        printf("Press 4 to exit\n");
        printf("ENTER THE OPERATION TO BE PREFORMED: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: enque();
                    break;
            case 2: deque();
                    break;
            case 3: display();
                    break;
            case 4: printf("------Exit-------\n!!BYE BYE!!");
                    exit(main);
            default: printf("Invalid operation");

        }

    }

    return 0;
}
void enque()
{
    if((front==0)&&(rear==9))
        printf("Overflow\n");
    else if(rear==9)
        printf("Virtual Overflow\n");
    else
    {
        printf("Enter a value: ");
        rear++;
        scanf("%d",&Q[rear]);
        if(front==-1)
            front=0;
    }
}

void deque()
{
    if((front==-1)&&(rear==-1))
        printf("Underflow\n");
    else if(rear=front)
           front=rear=-1;
    else
    {
            printf("%d removed\n",Q[front]);
            front++;
    }
    return;
}

void display()
{
    int i;
    if(front==-1)
        printf("Empty Queue\n");
    else
    {
        for(i=0;i<=rear;i++)
        printf("%d\t",Q[i]);
    }
}
