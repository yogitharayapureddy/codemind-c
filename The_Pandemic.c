#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=1)
        {
            printf("%d",0);
        }
        else if(a==2)
        {
            printf("%d",1);
        }
        else
        {
            printf("%d",2);
        }
    return 0;
}