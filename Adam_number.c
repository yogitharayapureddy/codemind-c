#include<stdio.h>
int main()
{
    int i,j,sum1=0,sum2=0,a,t,x,n;
    scanf("%d",&n);
    t=n;
    a=n*n;
    while(n!=0)
    {
        i=n%10;
        sum1=(sum1*10)+i;
        n=n/10;
    }
    x=sum1*sum1;
    while(x>0)
    {
        j=x%10;
        sum2=(sum2*10)+j;
        x=x/10;
    }
    if(sum2==a)
    printf("True");
    else
    printf("False");
    return 0;
}