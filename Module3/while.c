#include <stdio.h>
int main(){
    int i = 0;
    while(i <=10)
    {
        printf("%d\n", i);
        i++;
    }

    do
    {
        printf("%d\n while", i);
        i++;
    } while(i<=10);
}

