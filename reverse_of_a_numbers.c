#include<stdio.h>
int main()
{
    int n,t,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        s=(s*10)+t;
        n=n/10;
    }
    printf("%d",s);
}