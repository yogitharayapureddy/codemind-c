#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    a=sqrt(n);
    if(n==a*a)
    printf("True");
    else
    printf("False");
}