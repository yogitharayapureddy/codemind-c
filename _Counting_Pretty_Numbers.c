#include<stdio.h>
int main()
{
    int n,i,j,t=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        t=0;
        while(a[i]<=b[i])
        {
            if(a[i]%10==2||a[i]%10==3||a[i]%10==9)
            {
                t++;
            }
            a[i]++;
        }
        printf("%d",t);
        printf("
");
    }
    return 0;
}