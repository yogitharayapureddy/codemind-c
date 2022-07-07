#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k=0,c=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        c=c+a[i]*pow(2,k);
        k++;
    }
    printf("%d",c);
}