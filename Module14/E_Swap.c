#include <stdio.h>

int swap(a, b){
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b); 
    return;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}