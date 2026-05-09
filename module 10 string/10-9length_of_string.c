#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    scanf("%s", &a);
    printf("%s", a);

    int count = 0; 
    for (int i = 0; a[i] != '\0' ; i++)
    {
        count++;
    }
    printf("%d ", count); 

    int length = strlen(a);
    printf("%d", length); 
    
    return 0;
}