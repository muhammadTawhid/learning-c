#include <stdio.h>

void sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int total = a + b;
    printf("%d", total); 
}

int main(){
    sum();
    return 0;
}