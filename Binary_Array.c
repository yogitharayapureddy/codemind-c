#include<stdio.h>
int main()
{
    int n,i,arr[100],dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1 || arr[i]==0)
        {
            dc++;
        }
    }
    if(dc==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}