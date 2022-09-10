#include <stdio.h>
int main()
{
    int num1,num2,num3;
    int max,min,mid;
    printf("Enter number : "); 
    scanf("%d",&num1);
    printf("Enter number : "); 
    scanf("%d",&num2);
    printf("Enter number : "); 
    scanf("%d",&num3);


if (num1>num2 && num1>num3)//case num1=max
{
    if(num2>num3)
    {
        max=num1;
        mid=num2;
        min=num3;
    } 
    else if (num2<num3)
    {
        max=num1;
        mid=num3;
        min=num2;
    }
    else{}
}
else if (num2>num1&& num2>num3)//case num2=max
{
   if(num1>num3)
    {
        max=num2;
        mid=num1;
        min=num3;
    } 
    else if (num1<num3)
    {
        max=num2;
        mid=num3;
        min=num1;
    }
    else{}
}
else if (num3>num1 && num3>num2)//case num3=max
{
   if(num2>num1)
    {
        max=num3;
        mid=num2;
        min=num1;
    } 
    else if (num2<num1)
    {
        max=num3;
        mid=num1;
        min=num2;
    }
    else{}
}
else{}
printf("max : %d\n",max);
printf("mid : %d\n",mid);
printf("min : %d\n",min);

return 0;
}