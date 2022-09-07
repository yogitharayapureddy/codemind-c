#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float b;
    scanf("%d",&n);
    a=sqrt(n);
    b=sqrt(n);
    if(b-a==0)
    printf("True");
    else
    printf("False");
}