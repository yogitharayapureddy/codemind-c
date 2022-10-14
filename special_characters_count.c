#include <stdio.h> 
#include <ctype.h> 
 
int main() 
{ 
    int i=0,s=0; 
    char str[100]; 
    scanf("%[^
]s",&str[i]);
    while(str[i] != NULL) 
    { 
    	if((isalpha(str[i])==0) && (isdigit(str[i])==0) && (isspace(str[i])==0)) s++;    	 
    	i++; 
	} 
	printf("%d",s);
 
}


