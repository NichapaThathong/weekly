#include <stdio.h>
int main()
{
int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
float sum,Average;
printf("Height 0 : ");
scanf("%d",&x1);
printf("Height 1 : ");
scanf("%d",&x2);
printf("Height 2 : ");
scanf("%d",&x3);
printf("Height 3 : ");
scanf("%d",&x4);
printf("Height 4 : ");
scanf("%d",&x5);
printf("Height 5 : ");
scanf("%d",&x6);
printf("Height 6 : ");
scanf("%d",&x7);
printf("Height 7 : ");
scanf("%d",&x8);
printf("Height 8 : ");
scanf("%d",&x9);
printf("Height 9 : ");
scanf("%d",&x10);

sum = (x1+x2+x3+x4+x5+x6+x7+x8+x9+x10);
Average =(sum/10);
printf("Average height = %.2f",Average);
return 0;
}
