//insertion operation in doubly linked list
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    struct node *prev;
    struct node *next;
    int info;

};

struct node *start=NULL;
struct node *end=NULL;
struct node *p =NULL;

void create_node();  // to create node
void insert_beg(); // to insert in begnining
void insert_btw();// to insert in between or at a desired position
void insert_end();//to insert in end
void main()
{
    int ch;
    printf("!! INSERTION OF DOUBLY LINKED LIST !!\n");
    printf("Press 1 to insert in begnining \n");
    printf("Press 2 to insert in between \n");
    printf("Press 3 to insert in end \n");
    printf("Press 4 to exit \n");
    while(ch!=4)
    {
        printf("\nEnter the option to be performed: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert_beg();
                    break;
            case 2: insert_btw();
                    break;
            case 3: insert_end();
                    break;
            case 4:printf("\n!! EXIT !!\n");
                    break;
            default: printf("Invalid operation choice. Please Enter a correct choice\n");
        }
    }
}

void create_node()
{
    struct node *p =NULL;
    printf("Enter the value to be inserted: ");
    p=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->info);
    p->next=NULL;
    p->prev=NULL;
    
}

void insert_beg()
{
    create_node();
    if(start==NULL)
        {
            p=start;
            start=end;
        }
    else
        {
            p->next=start;
            start->prev=p;
            start=p;
        }
}

void insert_btw()
{
    int pos;
    struct node *ptr=NULL;
    struct node *pt=NULL;
    create_node();
    ptr=start;
    printf("Enter the position to insert the element: ");
    scanf("%d",&pos);
    for(int i=0;i<pos;i++)
    {
        ptr=ptr->next;
        if(ptr==end)
        {
            printf("You have reached the end of list");
            break;
        }
        if(ptr==NULL)
        {
            printf("Entered position doesn't exist in the list");
            break;
        }
            
    }
    if(ptr!=NULL)
    {
        pt=ptr->prev;
        pt->next=p;
        p->prev=pt;
        p->next=pt;
        ptr->prev=p;
        
    }
    else
       {
           printf("No such position");
           free(p);
       }
}

void insert_end()
{
    create_node();
    if(end==NULL)
        p=end;
    else
        {
            end->next=p;
            p->prev=end;
            p=end;
        }
}
