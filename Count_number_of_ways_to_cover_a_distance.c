#include<stdio.h>
int now(int num)
{
    if(num<=0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    if(num==2)
    {
        return 2;
    }
    if(num==3)
    {
        return 4;
    }
    return now(num-1)+now(num-2)+now(num-3);
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",now(a));
    return 0;
    
}