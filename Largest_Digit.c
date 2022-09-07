#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    b=0,c=0;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        if(a>=b)
        {
            b=a;
        }
        else
        {
            c=a;
        }
    }
        if(b>c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    
}