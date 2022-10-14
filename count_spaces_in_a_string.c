#include<stdio.h>
int main()
{
  char a[60]; 
  int i=0,count=0;
  
  scanf("%[^
]s",&a[i]);
  
  while(a[i]!=NULL)
  {
     if(a[i]==' ')
     { 
       count++;
     }
     i++;  
  }
  printf("%d",count);
}