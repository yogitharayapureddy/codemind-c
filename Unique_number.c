#include <stdio.h>

int main(){
    int n, i, digit;
    static int arr[10];
    scanf("%d", &n);
    while(n>0){
        digit = n%10;
        arr[digit]++;
        n=n/10;
    }
    for(i=0; i<10; i++){
        if(arr[i]>1){
            printf("Not Unique Number");
            break;
        }
    }
    if(i==10){
        printf("Unique Number");
    }
    return 0;
  
}