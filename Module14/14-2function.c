#include <stdio.h>

int sum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int sub(int num1, int num2){
    int sum = num1 - num2;
    return sum;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int total = sum(a, b);
    int substractin = sub(a, b);
    printf("%d %d", total, substractin); 
    return 0;
}