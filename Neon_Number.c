#include<stdio.h>
int main()
{
    int n,i,a,sum=0;
    scanf("%d",&n);
    a=n*n;
    while(a>0)
    {
        i=a%10;
        sum=sum+i;
        a=a/10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}