#include<stdio.h>
int main()
{
    int n,t,s=0,f=0;
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
        f=1;
        
    }
    while(n>0)
    {
        t=n%10;
        s=(s*10)+t;
        n=n/10;
    }
    if(f==0)
    printf("%d",s);
    else
    printf("%d",-s);
}