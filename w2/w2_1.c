#include<stdio.h>
int main()
{
    float weight=0,height=0,BMI;
        printf("Enter you weight (kg):");
        scanf("%f",&weight); 
        printf("Enter you height (m):");
        scanf("%f",&height); 
        BMI = weight/(height*height); 
        printf("You BMI :%0.1f\n",BMI);
        if(BMI < 18.5){ 
                printf("Underweight\n");
        }else if(BMI <= 24.9){ 
                printf("normal weight\n");
        }else if(BMI <= 29.9){  
                printf("Over weight\n");
        }else{  
                printf("Obesity\n");
        }
}