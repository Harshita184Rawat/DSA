#include<sdtio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
}
struct node *start==NULL;
void insert();
void delete();
void display();
int main()
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
            exit(main);
        default: printf("Invalid operation\n");
        }
    }
}
void insert()
{
    struct node *p==NULL;
    p=(struct node*)malloc(sizeof(struct node));
    


}