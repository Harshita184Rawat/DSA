//To multiply two 3x3 Matrices
#include<stdio.h>
void main()
{
    int R=3,C=3,i,j,k,sum=0;
    int A[3][3],B[3][3],M[3][3];
    printf("Enter the matrix: \n");
    for(i=0;i<3;i++)
    {
        printf("Enter the row %d of A matrix \n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("Enter the row %d of B matrix \n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    // to print 2D matrix
    printf("matrix A :\n");
   for(i=0; i<3; i++)
     {
         for(j=0;j<3;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf(" matrix B:\n");
   for(i=0; i<3; i++)
     {
         for(j=0;j<3;j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    //to multiply matrix A and Matrix B
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           sum=0;
           for(k=0;k<3;k++)
           {
               sum=sum+A[i][k]*B[k][j];
           }
           M[i][j]=sum;

       }
   }
    printf("To print resultant matrix M :\n");
   for(i=0; i<3; i++)
     {
         for(j=0;j<3;j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}
