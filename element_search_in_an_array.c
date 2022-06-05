#include<stdio.h>
int main()
{
    int a[100],n,i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
        printf("True");
        return 0;
        }
    }
   
    printf("False");
}