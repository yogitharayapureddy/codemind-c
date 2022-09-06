#include<stdio.h>
int main()
{
    int n,a[100],i,b,c=0;
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        scanf("%d",&b);
        for(i=0;i<b;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<b;i++)
        {
            if(a[i]%2!=0)
            c++;
        }
        printf("%d
",c/2);
    }
}