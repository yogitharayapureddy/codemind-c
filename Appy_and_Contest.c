#include<stdio.h>
int main()
{
    int t,n,a,b,k,u1,u2,u3,i,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        c=a*b;
        u1=((n-a)/a)+1;
        u2=((n-b)/b)+1;
        u3=((n-(a*b))/(a*b))+1;
        if((u1+u2-u3)>k)
        {
            printf("Win
");
            
        }
        else
        {
            printf("Lose
");
        }
    }
}