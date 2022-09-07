#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0;
    for(int i=00;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            s++;
        }
    }
    printf("%d",s);
}