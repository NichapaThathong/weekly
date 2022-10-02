#include<stdio.h>
int s(int *i,int *j)
{   
    int sum;
    sum=*i+*j;
    return sum;
}
int main()
{   int x,y,sum;
    FILE*fp,*f;
    scanf("%d %d",&x,&y);
    fp=fopen("a.txt","w");
    fprintf(fp,"%d %d",x,y);
    fclose(fp);

    sum=s(&x,&y);
    f=fopen("b.txt","w");
    fprintf(fp,"%d",sum);
    fclose(f);
    
}