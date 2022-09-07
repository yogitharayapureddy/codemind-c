#include<stdio.h>
int main()
{
    int a,flag=0;
    scanf("%d",&a);
    if(a>0)
    {
        while(a>0)
        {
            if(a%2==0)
            {
                a/=2;
            }
            else if(a%3==0)
            {
                a/=3;
            }
            else if(a%5==0)
            {
                a/=5;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            if(a==1)
            {
                printf("Ugly Number");
            }
            else
            {
                printf("Not Ugly Number");
            }
        }
        else
        {
            printf("Ugly Number");
        }
    }
    else
    {
        printf("Not Ugly Number");
    }
    
}