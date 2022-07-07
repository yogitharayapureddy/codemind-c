#include<stdio.h>
int main()
{
    int n,k=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0 and a[i]!=1)
        k=1;

    }
    if(k==0)
    printf("True");
    else
    printf("False");
}
