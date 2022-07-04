#include<stdio.h>
int rev(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",rev(a[i]));
    }
    return 0;
}