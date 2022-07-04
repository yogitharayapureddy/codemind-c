#include<stdio.h>
int main()
{
    int n,a[100],t,s,d,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        s=0;
        while(t)
        {
            d=t%10;
            t=t/10;
            s=s*10+d;
        }
        if(s==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}