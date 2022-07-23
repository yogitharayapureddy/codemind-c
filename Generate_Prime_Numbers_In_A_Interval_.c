#include<stdio.h>
int main()
{
    int b,e,f,t,i,j;
    scanf("%d",&b);
    scanf("%d",&e);
    for(j=b;j<=e;j++)
    {
        f=0;
        for(i=1;i<j;i++)
        {
            if(j%i==0)
            f=f+1;
        }
        if(f==1)
        printf("%d
",j);
    }
}