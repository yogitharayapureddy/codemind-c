#include<stdio.h>
int main()
{
    int i,arr[100][100],n,j,m,sum1=0,sum2=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum1+=arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]%2!=0)
            {
                sum2+=arr[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
}