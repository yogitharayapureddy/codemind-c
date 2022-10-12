#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
       if(arr[i]%2)
       {
           d=arr[i];
       }
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]==d)
       {
           break;
       }
       sum+=arr[i];
    }
    printf("%d",sum);
}