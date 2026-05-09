#include <stdio.h>
#include <string.h>

int main(){
    char a[1000001];
    scanf("%s", &a);
    // fgets(a, 1000001, stdin);
    int sum = 0;
    int length = strlen(a);
    for (int i = 0; i < length; i++)
    {
        sum += a[i] - 48;
    }
    printf("%d", sum); 
    return 0;
}