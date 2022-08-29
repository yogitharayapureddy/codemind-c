#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[100],i,fa=0,fb=1,temp;
    for(i=0;i<100;i++)
    {
        arr[i]=fa;
        temp=fa+fb;
        fa=fb;
        fb=temp;
    }
    int flag=0;
    for(i=0;i<100;i++)
    {
        if(arr[i]==a)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}