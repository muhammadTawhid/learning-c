#include <stdio.h>

void sum(num1, num2){
    int total = num1 + num2;
    printf("%d", total); 
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}