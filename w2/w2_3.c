#include<stdio.h>
int main()
{   float bmi,w,h;
    printf("Enter you Weight(kg): ");
    scanf("%f",&w);
    printf("Enter you Height(m): ");
    scanf("%f",&h);
    bmi=w/(h*h);
    printf("BMI = %.2f\n",bmi);
    
    if (bmi<30)
    {
    
        while (bmi<29.9)
        {
            while (bmi<24.9)
            {
                while (bmi<18.9)
                {
                    printf("Underweight\n");
                    return 0;
                }
            printf("normal weight\n");   
            return 0;
            }
        printf("Over weight\n");    
        return 0;
        }
    
    }
    else{
    printf("Obesity\n");    
    return 0;
    }
}
    