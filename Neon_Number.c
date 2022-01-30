#include<stdio.h>
int main()
{
    int n,i,t,sum=0;
    scanf("%d",&n);
    t=n*n;
    while(t!=0)
    {
        i=t%10;
        sum=sum+i;
        t=t/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
    
}