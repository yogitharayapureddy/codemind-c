#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       if(arr[i]<=k)
       {
           sum+=arr[i];
       }
    }
    printf("%d",sum);
}