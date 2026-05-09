#include <stdio.h>

int main(){
    int n = 10;
    printf("%d\n", n); 
    printf("%p\n", &n); 

    int* ptr = &n;
    printf("%p\n", ptr); 
    printf("%d\n",*ptr); 
    *ptr = 34;
    printf("%d\n", n); 

    return 0;
}