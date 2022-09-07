#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    float a1=(float)s/n;
    printf("%.2f",a1);
}