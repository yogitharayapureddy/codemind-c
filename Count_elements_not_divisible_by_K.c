#include<stdio.h>
int main()
{
    int n,a[100],i,k,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%k!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}