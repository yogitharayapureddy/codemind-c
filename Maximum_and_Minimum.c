#include<stdio.h>
int main()
{
    int i,j,a[100],f=0,max=0,min=999,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            if(a[i]>max)
            max=a[i];
            if(a[i]>max)
            max=a[i];
            if(a[i]<min)
            min=a[i];
            f++;
        }
    }
    if(f==0)
    printf("-1");
    else
    printf("%d %d ",min,max);
}
