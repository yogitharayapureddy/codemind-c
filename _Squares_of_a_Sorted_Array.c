#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=pow(a[i],2);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                k=b[i];
                b[i]=b[j];
                b[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}