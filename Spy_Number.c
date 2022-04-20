#include<stdio.h>
int main()
{
    int n,i,sum=0,prod=1;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        prod=prod*i;
        n=n/10;
    }
    if(sum==prod)
    {
        printf("Spy Number");
    }
    else
     {
        printf("Not Spy Number");
     }
        return 0;
}