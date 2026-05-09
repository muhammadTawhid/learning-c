#include <stdio.h>

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main(){
    
    int total = sum();
    printf("%d", total); 
    return 0;
}