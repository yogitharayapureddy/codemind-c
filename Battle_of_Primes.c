#include<stdio.h>
int main()
{
    int n,m,d,f=0,c;
    scanf("%d%d",&n,&m);
    c=m+n;
    d=c+1;
    while(1)
    {
        f=0;
        for(int i=1;i<=d;i++)
        {
            if(d%i==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            printf("%d",d-c);
            break;
        }
        d++;
    }
}