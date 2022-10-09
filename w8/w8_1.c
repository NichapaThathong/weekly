#include<stdio.h>
int main()
{   int x,y,sum,px1,px2,py1,py2;
    FILE*fp,*f;
    scanf("%d %d",&x,&y);
    fp=fopen("a.txt","w");
    fprintf(fp,"%d %d",x,y);
    fclose(fp);
    px1=x/2;
    if(x%2==0)
    {
     px2=px1;
    }
    else
    {px2=px1+1;}
    
    py1=y/2;
    if(y%2==0)
    {
      py2=py1;
    }
    else    
    {py2=py1+1;}
    
    sum=px1+px2+py1+py2;
    f=fopen("b.txt","w");
    fprintf(fp,"%d",sum);
    fclose(f);
}