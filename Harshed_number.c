#include<stdio.h>
int main()
{
    int i,n,sum=0,l;
    scanf("%d",&n);
    l=n;
    while(n>0)
    {
        i=n%10;
       sum=sum+i;
        n=n/10;
    }
    if(l%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
    
}