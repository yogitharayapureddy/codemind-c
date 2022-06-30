#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i+1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%d",i);
        }
        printf("
");
    }
}