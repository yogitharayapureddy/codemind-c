#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
    char s[20];
    scanf("%[^
]s",s);
    t=strlen(s);
    for(i=t-1;i>=0;i--)
    printf("%c",s[i]);
}