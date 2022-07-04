#include<stdio.h>
int digitsum(int n)
{
    if(n<10)
    {
        return n;
    }
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=digitsum(a[i]);
    }
    printf("%d",sum);
    return 0;
}