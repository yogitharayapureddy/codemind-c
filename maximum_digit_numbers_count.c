#include<stdio.h>
int digit(int n)
{
    int r,c=0;
    while(n!=0)
    {
        r=n%10;
        c++;
        n/=10;
    }
    return c;
}
int main()
{
int n,i,max=0,ct=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(digit(a[i])>max)
    {
        max=digit(a[i]);
    }
}
for(i=0;i<n;i++)
{
    if(digit(a[i])==max)
    {
        printf("%d ",a[i]);
    }
}
}