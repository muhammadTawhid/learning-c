#include <stdio.h>

long long int factorial(int n){
    if (n == 1)
    {
        return 1;
    }
    

    long long int multiply = factorial(n-1);
    return n*multiply;
}

int main(){
    int n;
    scanf("%d", &n);
    long long int ans = factorial(n);
    printf("%lld", ans); 
    return 0;
}