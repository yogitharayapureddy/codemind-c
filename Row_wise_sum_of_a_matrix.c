#include <stdio.h>
int main()
{
     int a[100][100],i,n,m,j,sum=0;
     scanf("%d%d",&n,&m);
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               scanf("%d",&a[i][j]);
          }
     }      
     for(i=0;i<n;i++)
     {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j]; 
        }
        printf("%d ",sum);
     }      
}