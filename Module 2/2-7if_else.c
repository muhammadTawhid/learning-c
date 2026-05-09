#include <stdio.h>

int main(){
    int balance;
    scanf("%d", &balance);
    if(balance >= 100){
        printf("burger khabo\n");   
    }
    else if(balance >= 50){
        printf("fuchka khabo\n");
    }
    else{
        printf("kichui khabo na\n");
    }

    return 0;
}