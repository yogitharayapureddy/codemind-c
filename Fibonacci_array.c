#include<stdio.h>
int main()
{
    int n,arr[100],i,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(arr[i]+arr[i+1]==arr[i+2])
        {
            continue;
        }
        else
        {
            a++;
        }
    }
    if(n<3)
    {
        a=1;
    }
    if(a==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}