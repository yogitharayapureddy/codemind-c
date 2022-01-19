#include<stdio.h>
int main()
{
    int f;
    float c;
    scanf("%d",&f);
    c=(float)((f-32)*5)/9;
    printf("%.2f",c);
    return 0;
}