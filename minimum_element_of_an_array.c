#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],min=999999;
     for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
        min=a[i];
    }
    printf("%d",min);

}