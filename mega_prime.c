#include<stdio.h>
int main()
{
    int i,j,n,m,fact=0,d=0,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fact++;
        }
    }
    if(fact==2)
    {
        while(n>0)
        {
            fact=0;
            m=n%10;
            for(j=1;j<=m;j++)
            {
                if(m%j==0)
                {
                    fact++;
                }
            }
            if(fact==2)
            {
                p++;
            }
            d++;
            n=n/10;
        }
        if(d==p)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }

}