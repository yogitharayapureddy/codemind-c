#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,diff,sum1=0,sum2=0,e,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//1 2 3 4 5 6
    }
    if(n%2)
    {
        e=(n-1)/2;
        d=n-e;
    }
    else
    {
        e=n/2;//3
        d=n-e;//3
    }
    for(i=0;i<e;i++)//2
    {
        sum1+=arr[i];//1+
    }
    for(i=e;i<n;i++)
    {
        sum2+=arr[i];
    }
    diff=abs(sum1-sum2);
    printf("%d",diff);
}