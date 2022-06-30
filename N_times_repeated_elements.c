#include<stdio.h>
int main()
{
    int i,j,n,m,a[100],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
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
        if(c==m)
        {
            printf("%d ",a[i]);
            f++;
            a[i]=0;
        }
    }
    if(f==0)
    printf("-1");
}