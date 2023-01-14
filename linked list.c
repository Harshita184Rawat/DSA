#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;
void insert();
void delete();
void display();
void main()
{
    int ch;
    printf("$$ LINKED LIST $$\n");
    while(ch=4)
    {
        printf("Press 1 to insert\n");
        printf("Press 2 to delete\n");
        printf("press 3 to display\n");
        printf("Press 4 to exit\n");
        printf("Enter the operation to be performed\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:insert();
                break;
        case 2:delete();
                break;
        case 3:display();
                break;
        case 4:printf("---EXIT----\n!! BYE BYE !!\n");
        default: printf("Invalid operation\n");
        }
    }
    
}
void insert()
{
    struct node *p=NULL;
    struct node *pt=NULL;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted");
    scanf("%d",&p->info);
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        int pos=0;
        printf("Enter the position");
        scanf("%d",&pos);
        if(pos==1)
        {
            start=p;
            p->next=start;
        }
        else 
        {
            pt=start;
            for(int i=0;i<pos-1;i++)
            pt=pt->next;
            if(pt==NULL)
            {
                printf("value of that position can't inserted");
                free(p);
            }
            else
            {
                p->next=pt->next;
                pt->next=p;
            }
        }
    }
}

void del()
{
    struct node *p=NULL;
    struct node *pt=NULL;
    if(start==NULL)
        printf("Underflow List id empty");
    else
    {
        int pos=0, i=0;
        printf("Enter the position of element to be deleted");
        scanf("%d",&pos);
        if(pos==1)
            {
                p=start;
                start=start->next;
                free(p);
            }
        else
        {
            p=NULL;
            pt=start;
            for(i=0;i<pos;i++)
            {
                p=pt;
                pt=pt->next;
                if(pt==NULL)
                    break;
            }
            
            if(pt==NULL)
                printf("Invalid value");
            else
            {
                p->next=pt->next;
                free(p);
            }
        }
        
    }
}

void display()
{
    struct node *p=start;
    int i=0;
    if(start==NULL)
        printf("Empty List");
    else
    {
        while(p!=NULL)
        {
            printf("%d\t",p->info);
            p=p->next;
        }
    }
}
