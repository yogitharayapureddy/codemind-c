#include<stdio.h>
int main()
{
    int i,n,j,k=-1;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i]==s[j]&&i!=j)
            break;
        }
        if(j==n)
        {
            k=s[i];
            printf("%d ",k);
        }
        
    }
    if(k==-1)
    printf("%d ",k);
}