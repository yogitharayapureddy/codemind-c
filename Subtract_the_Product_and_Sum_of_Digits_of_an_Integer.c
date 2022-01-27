#include<stdio.h>
int main()
{
    int i=1,n,sum=0,prod=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        prod=prod*i;
        n=n/10;
    }
    res=prod-sum;
    printf("%d",res);
    return 0;
    
}