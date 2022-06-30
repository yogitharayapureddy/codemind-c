#include<stdio.h>
int main()
{
    int a[100],n,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n]=a[0];
    a[n+1]=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i-1]%2==0&&a[i+1]%2!=0)
        {
            c++;
        }
        if(a[i-1]%2!=0&&a[i+1]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}