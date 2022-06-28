#include<stdio.h>
int main()
{
    int a,b,i=0,j;
    int n,m,even=0,odd=0;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        j=a%10;
        a/=10;
        i++;
    }
    while(n!=0)
    {
        j=n%10;
        if(j%2==0)
        even++;
        else
        odd++;
        n/=10;
    }
    if(i==even)
    printf("Even");
    else if (i==odd)
    printf("Odd");
    else
    printf("Mixed");
}