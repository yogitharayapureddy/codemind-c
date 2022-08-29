#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],brr[a];
    int i ,j,c=0;
     for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<a;i++)
    {
        scanf("%d",&brr[i]);
    }
     for(i=0;i<a;i++)
    {
        if(arr[i]<=brr[i])
        {
            arr[i]=0;
            brr[i]=0;
        }
        else if(arr[i]>brr[i])
        {
            if(i-1>=0)
            {
                if(brr[i-1]>arr[i])
                {
                    brr[i-1]=0;
                    arr[i]=0;
                }
            }
            else if(i+1<a)
            {
                if(brr[i+1]>arr[i])
                {
                    brr[i+1]=0;
                    arr[i]=0;
                }
            }
            
        }
    }
    for(i=0;i<a;i++)
    {
        if(brr[i]!=0)
        {
            c++;
        }
    }
    printf("%d",c);
    
}