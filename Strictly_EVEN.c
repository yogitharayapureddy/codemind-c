#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0)
            k=1;
        }
    }
    if(k==0)
    printf("True");
    else
    printf("False");
}