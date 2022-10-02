#include <stdio.h>

int main()
{
    //change minatee to hours
    int num;
    int h=0, m=0, s=0;
    printf("Input second : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){

        if(i%60 == 0){//change to hours
           m++;
           s =0;
        }
        else
           s = i%60;
        if(m == 60){
            h++;
            m=0;
        }


    }
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