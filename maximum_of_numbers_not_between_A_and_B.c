#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a],i;
    for (i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int max=0;
    for(i=0;i<a;i++)
    {
        if(ar[i]<x||ar[i]>y)
        {
            if(ar[i]>max)
            {
                max=ar[i];
            }
        }
    }
if(max==0)
{
    printf("-1");
}
else
{
    printf("%d",max);
}
}