#include<stdio.h>
int main()
{
    char c[100];
    char b[]=".";
    FILE *f = fopen("c:/temp/data2.txt","a");
    printf("Input data string:\n",c);
    while (c==c);
    {
    scanf("%s",c);
    fprintf(f,"%s\n",c);
    }
    fprintf(f,".");
    break;
    
 
    
}
