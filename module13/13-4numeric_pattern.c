
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num = 1;
    int space = n -1;

    for (int i = 1; i <= n; i++)
    {   
        for (int k = 1; k <= space; k++)
        {
            printf(" "); 
        }
        
        for (int j = 1; j <= num; j++)
        {
            printf("%d ", j); 
        }
        
        space--;
        num++;
        printf("\n"); 
    }
    
    return 0;
}

















// reverse numeric pyramid

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int star = n;
//     int space = 0;
//     for (int i = 1; i <= n; i++)
//     {   
//         for (int i = 1; i <= space; i++)
//         {
//             printf(" "); 
//         }
        
//         for (int i = 1; i <= star; i++)
//         {
//             printf("%d", i); 
//         }
        
//         space++;
//         star--;
//         printf("\n"); 
//     }
    
//     return 0;
// }