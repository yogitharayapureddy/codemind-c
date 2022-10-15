#include<stdio.h>
int main()
{
    int arr[100],i,n,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
          continue;
        }
        if(i%2 && arr[i]%2==0)
        {
            dc++;
        }
    }
    if(dc==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}