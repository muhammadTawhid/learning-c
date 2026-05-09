#include <stdio.h> 

int main(){
    int a = 10;
    int b = 5;
    int sum = a + b;
    printf("total %d\n", sum);
    int substract = a - b;
    printf("substract %d\n", substract);
    int multiply = a * b;
    printf("multiplication %d\n", multiply);
    // int division = a / 3;
    float division = a / b;
    printf("division %f\n", division);
    int modulus = 5 % 2;
    printf("modulus %d\n", modulus);
    return 0;
}