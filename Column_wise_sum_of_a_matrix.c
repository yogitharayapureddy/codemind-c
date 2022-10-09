#include<stdio.h>
int main()
{
    int a[100][100],i,n,m,j,sumr,sumc;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sumc=0;
        for(j=0;j<m;j++)
        {
            sumc=sumc+a[j][i];
        }
        printf("%d ",sumc);
    }
}