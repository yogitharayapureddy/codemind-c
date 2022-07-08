#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,o=0,e=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(i%2==0)
            o+=a[i][j];
            else
            e+=a[i][j];
        }
    }
    printf("%d %d",o,e);
}