#include<stdio.h>
 int main()
 {
 float h,w,bmi;
 printf("Enter you Weight(kg): ");
 scanf("%f",&w);
 printf("Enter you Height(m): ");
 scanf("%f",&h);
 bmi=w/(h*h);
 printf("BMI = %.2f",bmi);
 if(bmi>30)
 printf("\nObesity");
 if(bmi>=25&&bmi<30)
 printf("\nOverweight");
 if(bmi>=18.5&&bmi<25)
 printf("\nNormal weight");
 if(bmi>=0&&bmi<18.5)
 printf("\nUnderweight");
 
}