#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,fact;
    if(a>=1 && a<=100)
    {
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<a;i++)
        {
            fact=1;
            for(j=1;j<=arr[i];j++)
            {
                fact*=j;
            }
            printf("%d
",fact);
        }
    }
}