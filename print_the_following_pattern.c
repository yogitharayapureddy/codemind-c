#include<stdio.h>
int main()
{
    int a,n,i,j=1,c=1;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        while(j<=a)
        {
            printf("%c ",(char)(i+64));
            j++;
        }
        c++;
        j=c;
        printf("
");
    }
}