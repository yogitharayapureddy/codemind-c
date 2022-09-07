#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0;
     for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=n-1;i>=0;i--)
    {
        if(a[i]%2==1)
        {
            printf("%d",i);
            break;
        }
        
    }
    
}