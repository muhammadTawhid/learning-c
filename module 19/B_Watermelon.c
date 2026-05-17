#include <stdio.h>

int main(){
    int w;
    scanf("%d", &w);
    int divide = w/2;
    if (divide*2 == w && w > 2)
    {
        printf("YES"); 
    }
    
    return 0;
}