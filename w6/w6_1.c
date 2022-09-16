#include<stdio.h>
int main()
{
    int n[10],i,j,temp,median;
    
    for( i=0;i<10;i++)
    {
        printf("Enter number : ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<10-1;i++)
    {
        for(j=i+1;j<10;j++)
        {
        if(n[i]>n[j])
        {
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
        }
        }
    }
    median=(n[4]+n[5])/2;// 0 1 2 3 |4+5| 6 7 8 9 
    printf("\nMedian= %d",median);
    return 0;
}