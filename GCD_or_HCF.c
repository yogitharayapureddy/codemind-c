#include<stdio.h>
int main()
{
    int a,b,t,i=0;
    scanf("%d%d",&a,&b);
    for(t=2;t<=a&&t<=b;t++)
    {
        if(a%t==0 && b%t==0)
        {
            i=t;
        }
    }
    if(i!=0)
    printf("%d",i);
    else
    printf("1");
}