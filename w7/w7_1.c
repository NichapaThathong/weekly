#include<stdio.h>
int main()
{
    int num,h,m,s;
    printf("Input second : ");
    scanf("%d",&num);

    h=num/3600;
    m=(num%3600)/60;
    s=(num%3600)%60;

    if (m==0 && s==0)
    {
        printf("Time = %d:%d0:%d0",h,m,s);
    }
    else if (s==0)
    {
        printf("Time = %d:%d:%d0",h,m,s);
    }
    else
    {
        printf("Time = %d:%d:%d",h,m,s);
    }
    return 0;
}