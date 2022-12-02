//To check whether a matrix is a magic square or not
#include<stdio.h>
void main()
{
    int R=3,C=3,i,j,sumR=0,sumC=0,sumD=0,flag1=0,flag2=0;
    int A[3][3];
    printf("Enter the matrix: \n");
    for(i=0;i<R;i++)
    {
        printf("Enter the row %d of A matrix \n",i+1);
        for(j=0;j<C;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    // to print 2D matrix
    printf("matrix A :\n");
   for(i=0; i<3; i++)
     {
         for(j=0;j<3;j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<R;j++)
        {
        if(i==j)
        sumD=sumD+A[i][j];
        }

    }
    for(i=0;i<R;i++)
    {
        sumR=0;
        for(j=0;j<R;j++)
        {
            sumR=sumR+A[i][j];
        }
        if(sumD==sumR)
            flag1=0;
        else
            flag1=1;

        break;

    }
    for(j=0;j<C;j++)
    {
        sumC=0;
        for(j=0;j<R;j++)
            {
                sumC=sumC+A[i][j];
            }
            if(sumD==sumR)
                flag2=0;
            else
                flag2=1;
            break;

    }
    if(flag1==0&&flag2==0)
    printf("Matrix is magic square");
    else
    printf("Matrix is not a magic square");
