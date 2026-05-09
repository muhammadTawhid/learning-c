// #include <stdio.h>

// int main(){
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("hi "); 
//         if (i > 2)
//         {
//             break;
//         }
        
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i = 3;
//     while (i<=5)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("*"); 
//         }
//         printf("\n"); 
//         i++;
        
//     }
    
//     return 0;
// }

#include <stdio.h>

int main(){
    for (int i = 0; i <= 10; i++)
    {
        if (i > 2)
        {
            printf("%d", i); 
            break;
        }
        printf("hi"); 
        
    }
    
    return 0;
}