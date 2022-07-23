#include<stdio.h>
int odd(int n)
{
    int r,s=0;
    while(n)
    {
        r=n%10;
        s=s+r;
        n/=10;
    }
    if(s>=10)
    {
        return odd(s);
    }
    else
    {
        return s;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",odd(n));
}