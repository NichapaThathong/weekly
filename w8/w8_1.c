#include<stdio.h>
int main()
{   int x,y,sum;
    FILE*fp,*f;
    scanf("%d %d",&x,&y);
    fp=fopen("a.txt","w");
    fprintf(fp,"%d %d",x,y);
    fclose(fp);

    sum=x+y;
    f=fopen("b.txt","w");
    fprintf(fp,"%d",sum);
    fclose(f);
}