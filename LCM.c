#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d%d",&a,&b);
    i=a>b?a:b;
    while(1)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}