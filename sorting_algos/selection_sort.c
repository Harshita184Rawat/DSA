// Selection Sort program
#include<stdio.h>
void main()
{
    int list[]={48,45,67,898,232,465,2,9,5};
    int  n=sizeof(list)/sizeof(list[0]);
    int temp;
    // to select minimun from i to n
    for(int i=0;i<n;i++)
    {
        int k=i;
        int min=list[i];
        for(int j=i+1;j<n;j++)
        {
            if(list[j]<min)
            {
                min=list[j];
                k=j;
            }
        }
        list[k]=list[i]; //swap minimum to the ith element of list
        list[i]=min;
    }
    // to print sorted list
    for(int i=0;i<n;i++)
        printf("%d ",list[i]);
}
