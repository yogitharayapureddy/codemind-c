#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        int m=a[i][0];
        for(j=0;j<n;j++)
        {
            if(m<a[j][i])
            m=a[j][i];
        }
        printf("%d
",m);
    }
}