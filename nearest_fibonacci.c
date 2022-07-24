#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[100],i,j;
    int fa=0,fb=1,temp;
    for(i=0;i<100;i++)
    {
        arr[i]=fa;
        temp=fa+fb;
        fa=fb;
        fb=temp;
    }
    int dl=0,df=0,fib=0;
    for(i=0;i<=100;i++)
    {
        if(arr[i]>a)
        {
            dl=arr[i]-a;
            df=a-arr[i-1];
            if(dl==df)
            {
                printf("%d %d",arr[i-1],arr[i]);
            }
        else if(dl>df)
        {
            fib =i-1;
            printf("%d",arr[fib]);
        }
        else
        {
            fib=i;
            printf("%d",arr[fib]);
        }
        break;
    }
}
}