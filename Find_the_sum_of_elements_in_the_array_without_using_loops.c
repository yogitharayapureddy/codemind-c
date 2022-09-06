#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   // if(n>30)
   int a[n],i,j=0;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       j+=a[i];
   }
   printf("%d",j);
}