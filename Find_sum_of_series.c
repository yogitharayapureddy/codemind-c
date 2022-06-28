#include<stdio.h>
int main()
{
    float a,i=0,sum=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        sum+=(1/i);
    }
    printf("%.2f",sum);
}