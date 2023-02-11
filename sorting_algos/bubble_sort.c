#include<stdio.h>
int main()
{
    int A[]={32,45,657,22,56,7,868,4,2,1,2,53,4,675,776,};
    int n=sizeof(A)/sizeof(A[0]),temp;
    for (int pass=1; pass<n; pass++)
    {
        for(int i=0;i<n-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    printf("Sorted List\n");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
        
    return 0;
}
