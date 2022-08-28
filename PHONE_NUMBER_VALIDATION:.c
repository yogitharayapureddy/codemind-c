#include<stdio.h>
int main()
{
    long int a;
    scanf("%ld",&a);
    if(a>1000000000 && a<= 9999999999)
    {
        if(a%1000000000!=0)
        {
            printf("Valid");
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }
}