#include<stdio.h>
int prime(int num)
{
    int c=0,i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,min=arr[0],max=arr[0],minind=0,maxind=0;
    for(i=0;i<a;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            minind=i;
        }
        if(max<arr[i])
        {
            max=arr[i];
            maxind=i;
        }
    }
    for(i=0;i<a;i++)
    {
        if(prime(arr[i])==1)
        {
            if((i>=minind && i<=maxind)||i<=minind &&i>=maxind)
            {
                c++;
            }
        }
    }
printf("%d",c);
}

