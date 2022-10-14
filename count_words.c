#include<stdio.h>
#include<string.h>
int isVowel(char ch)
{
    int i;
    char vowels[]={'a','e','i','o','u',
              'A','E','I','O','U'};
    for(i=0;i<10;i++)
    {
        if(ch==vowels[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char myStr[256],word[256];
    int i=0,j=0,ch,count=0;
    fgets(myStr,256,stdin);
    myStr[strlen(myStr)-1]=NULL;
    while(myStr[i]!=0)
    {
        if(myStr[i]==' ')
        {
            word[j]=NULL;
            j=0;
            if(isVowel(word[j]))
            {
                count++;
            }
            i++;
            continue;
        }
        word[j++]=myStr[i];
        i++;
    }
    word[j]=NULL;
    if(isVowel(word[0]))
    {
        count++;
    }
    printf("%d",count);
    return 0;
}