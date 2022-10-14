#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1000];  
    int i,c=0;
    scanf("%[^
]s",&s);
    for(i=0;s[i];i++)  
    { 
        if(s[i]>=65 && s[i]<=90)
        {
           c++; 
        }
 	}
    printf("%d",c);
    return 0;
}