#include <stdio.h>
int main()
{
    int num1,num2,first,gcd,lcm;
    printf("Enter num 1 : ");
    scanf("%d",&num1);
    printf("Enter num 2 : ");
    scanf("%d",&num2);
    if (num1>num2)
    first=num1;
    else
    first=num2;
    while(((num1%first)!=0)||((num2%first)!=0))
    {
        first = first-1;
    }
    gcd=first;
    lcm = (num1*num2)/gcd;
    printf("gcd : %d\n",gcd);
    printf("lcm : %d",lcm);
    return 0;
} 
