#include<stdio.h>
int main()
{
    int i,j,a[100],n,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            printf("%d ",a[i]);
            f++;
            a[i]=0;
        }
    }
    if(f==0)
    printf("-1");
}