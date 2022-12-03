#include<stdio.h>
#include<string.h>
void main()
{
    char A[50],B[50];
    int i=0,j=0,k,flag=0,len1,len2;
    printf("Enter sting A:");
    scanf("%s",A);
    printf("Enter sting B:");
    scanf("%s",B);
    len1=strlen(A);
    len2=strlen(B);
    if(len2>=len1)
        k=len1;
    else(len2<=len1);
        k=len2;
    while(i<=k)
    {
        if(A[i]-B[j]>0)
           {
               printf("B comes before A");
               break;
            }
        else if(A[i]-B[j]<0)
        {
            printf("A comes before B");
            break;
        }

        i++;
        j++;
    }
}
