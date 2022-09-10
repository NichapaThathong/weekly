#include <stdio.h>
int main()
{
    int num[3],i,j,max,min,mid;

    for(i=0;i<3;i++)
    {
        printf("Enter number : ");
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(j=1;j<3;j++)
    {
        if (min>num[j])
           {
            min=num[j];
           }
    }

    max=num[0];
    for(j=1;j<3;j++)
    {   if (max<num[j])
        {   max=num[j];
        }
        
    }
    mid=num[0];
    if(mid>min && mid<max)
    {
        mid=mid;
    }
    
    printf("max : %d\n",max);
    printf("mid : %d\n",mid);
    printf("min : %d\n",min);
    
    return 0;
}
    