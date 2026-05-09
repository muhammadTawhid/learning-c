#include <stdio.h>

int main(){
    int a[5] = {2, 4, 5, 6, 5};

    *(a+1) = 22; // array is a pointer which store 0th element's value, so +1 set it to the next index of array
    
    printf("%d\n", a[1]); 
    printf("%p", &a[2]); 
    return 0;
}