#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,gcd=1,lcm;
    printf("Enter num 1 : ");
    scanf("%d",&num1);
    printf("Enter num 2 : ");
    scanf("%d",&num2);
    
    int x=abs(num1),y=abs(num2);
    while (y!=0)
    {
       int i=y;
       y=x%y;
       x=i;

    }
    gcd=x;
    lcm = (num1*num2)/gcd;
    printf("gcd : %d\n",gcd);
    printf("lcm : %d",lcm);
    return 0;
}