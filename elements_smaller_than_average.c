#include<stdio.h>
int main()
{
    int arr[100],i,n,c,sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=int(sum/n);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}