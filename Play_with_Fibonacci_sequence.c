#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        if(i==a)
        {
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
        }
        else
        {
             printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
    }
}