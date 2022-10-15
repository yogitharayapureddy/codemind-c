#include<stdio.h>
int main()
{
    int n,j,gcd,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    gcd=arr[0];
    int i;
    while (j<n)
    {
        if (arr[j]%gcd==0)
        {
            j++;
        }
        else
        {
            gcd=arr[j]%gcd;
            i++;
        }
    }
    printf("%d",gcd);
}