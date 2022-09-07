#include<stdio.h>
int digit(int n)
{
    if(n<10)
    {
        return n;
    }
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    return s;
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=00;i<n;i++)
    {
        s+=digit(a[i]);
    }
    printf("%d",s);
}