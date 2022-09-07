#include<stdio.h>
int main()
{
    int n,flag=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i+1<n;)
    {
        if(a[i]<a[i+1])
        {
            i++;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("no");
    }
    else
    printf("yes");
}