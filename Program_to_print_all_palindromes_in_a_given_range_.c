#include<stdio.h>
int main()
{
    int a,b,q,j,n=0;
    scanf("%d%d",&a,&b);
    for(j=a;j<b;j++,a++)
    {
        n=0;
        while(j!=0)
        {
            q=j%10;
            j/=10;
            n=q + n * 10;
        }
        if(a==n)
        {
            printf("%d ",a);
        }
        j=a;
        
    }
    return 0;
}