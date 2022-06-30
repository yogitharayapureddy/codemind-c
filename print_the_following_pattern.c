#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j<=a-1;j++)
        {
            printf(" ");
        }
        for(j=i-1;j>0;j--)
        {
            printf("%d",j);
        }
        for(j=0;j<i;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
    return 0;
}