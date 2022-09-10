#include<stdio.h>
int main(){
    
    int a,i=1,j=0;
    print("Enter num : ");
    scanf("%d",&a);
    while (a--){
        j=i;
        while (j--)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}