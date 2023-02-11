// Linear search 
#include<stdio.h>
int main()
{
    int A[]={2,45,7,8,4,5,97,43,65,76,56,23,54};
    int n,key,flag=0;
    n=sizeof(A)/2;
    printf("Enter the number to be found: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            printf("Element %d found at position %d",key,i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Element Not Found");
    }

    return 0;
}
