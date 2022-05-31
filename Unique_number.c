#include<stdio.h>
int main()
{
    int i,n,d;
    static int a[10];
    scanf("%d",&n);
   while(n>0)
   {
       d=n%10;
       a[d]++;
       n=n/10;
   }
   for(i=0;i<10;i++)
   {
       if(a[i]>1)
       {
           printf("Not Unique Number");
           break;
       }
   }
   if(i==10)
   {
       printf("Unique Number");
   }
}