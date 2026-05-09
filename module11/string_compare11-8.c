#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    //built in function for string compare
    int val = strcmp(a,b);
    printf("%d ", strcmp(a,b)); 
    if(val < 0){
        printf("a is smaller"); 
    }
    else if (val == 0)
    {
        printf("a b equal"); 
    }
    else if (val > 0)
    {
        printf("b is smaller"); 
    }
    


    //manual function for string compare
    
    // int i = 0;
    // while (true)
    // {
    //     if(a[i] == '\0' && b[i] == '\0'){
    //         printf("a b equal"); 
    //         break;
    //     }
    //     else if(a[i] == '\0'){
    //         printf("a is smaller");
    //         break; 
    //     }
    //     else if(b[i] == '\0'){
    //         printf("b is smaller"); 
    //         break;
    //     }

    //     else if (a[i] < b[i])
    //     {
    //         printf("a is smaller"); 
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("b is smaller"); 
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }
    
    
    return 0;
}