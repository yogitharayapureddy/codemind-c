#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0,k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
   for(int i=0;i<n;i++)
   {
       if(a[i]==s/n)
       {
           printf("True");
           k=1;
           break;
       }
   }
   if(k==0)
   printf("False");
        
}