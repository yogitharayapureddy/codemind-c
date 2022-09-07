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
     for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            if(i%2==1)
            {
                s=0;
            }
            else
            {
                s=1;
                printf("False");
                break;
            }
        }
    }
    if(s==0)
    {
        printf("True");
    }
}