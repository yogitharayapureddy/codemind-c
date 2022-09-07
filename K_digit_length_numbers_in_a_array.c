#include<stdio.h>
int size(int n)
{
    int c=0;
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        
        n*=-1;
    }
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(i=0;i<a;i++)
    {
        int s=size(arr[i]);
        if(s==b)
        {
            c++;
        }
    }
    printf("%d",c);
}