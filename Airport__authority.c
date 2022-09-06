#include<stdio.h>
int main()
{
    int n,t,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        c+=1;
        else
        c+=2;
    }
    printf("%d",c);
}