#include <stdio.h>
int main()
{
	int i,num=10;
    int Height[10];
	float sum = 0;
	
	for(i=0;i<num;i++){
		printf("Height %d = ",i);
		scanf("%d",&Height[i]);
		sum = sum + Height[i];
	}
	
	printf("Average height = %.2f",sum/num);
}