#include <stdio.h>
void fun(int* x){
    *x = 44;
}

int main(){
    int x = 5;
    fun(&x);
    printf("%d", x); 
    return 0;
}