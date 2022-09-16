#include <stdio.h>
void swap(int *p1,int *p2) 
{
   int t;
    t=*p1; 
   *p1=*p2; 
   *p2=t;
}

void sort(int a[],int n) 
{ 
   int i,j;

   for(i = 0;i < n-1;i++) 
    {
      for(j = 0;j < n-i-1;j++) 
      {
        if(a[j] > a[j+1])
        swap(&a[j],&a[j+1]);
      }
    }
}

int main() 
{
   int a[10];
   int n = 10;
   int i,median;
   
    for(int k=0;k<10;k++)
    {
        printf("Enter number : ");
        scanf("%d",&a[k]);
    }
    sort(a,n);
    median =(a[4]+a[5])/2;      

    printf("Median = %d ",median);

    return 0;
}