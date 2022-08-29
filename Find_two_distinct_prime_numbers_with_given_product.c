#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,c=0;
    int p1,p2;
    for(i=2;i<=1000;i++)
    {
        for(j=2;j<=1000;j++)
        {
            if(i!=j &&j*j<=a)
            {
                if(prime(i)==1 && prime(j)==1)
                {
                    if(i*j==a)
                    {
                        p1=i;
                        p2=j;
                        c=1;
                        break;
                    }
                }
            }
        }
    }
    if(c==1)
    {
        printf("%d %d",p2,p1);
    }
    else
    {
        printf("%d",-1);
    }
    return 0;
}