#include<stdio.h>
int prime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    if(prime(t))
    {
        if(prime(s))
        printf("circular prime");
        else
        printf("prime but not a circular prime");
    }
    else
    printf("not prime");
    return 0;
}