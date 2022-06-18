#include<stdio.h>
int main()
{
    int n,i,r=0,s,sq,t=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    sq=r*r;
    while(sq>0)
    {
        t=t*10+sq%10;
        sq/=10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}