#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a!=1)
    {
        if(a%5==0)
        a/=5;
        else if(a%3==0)
        a/=3;
        else if(a%2==0)
        a/=2;
        else
        {
            printf("Not Ugly Number");
            return 0;
        }
    }
    printf("Ugly Number");
    return 0;
}