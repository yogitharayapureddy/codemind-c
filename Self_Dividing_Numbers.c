#include<stdio.h>
int self(int n)
{
    int r,t=n;
    if (n<10)
    return 1;
    if(n%10==0)
    return 0;
    while(n)
    {
        r=n%10;
        if(t%r!=0)
        return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int a,b;
    scanf("%d
%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}
