#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 || a%5==0 ||a%7==0)
    {
        if(a%3==0)
        {
            printf("Pling");
        }
        if(a%5==0)
        {
            printf("Plang");
        }
        if(a%7==0)
        {
            printf("Plong");
        }
    }
    else
    {
        printf("%d",a);
    }
}