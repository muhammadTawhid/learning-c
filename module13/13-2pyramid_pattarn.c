// #include <stdio.h>

// int main(){
//     int n, star = 1;
//     scanf("%d", &n);
//     int space = n-1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 1; k <=space; k++)
//         {
//             printf(" "); 
//         }
        
//         for (int j = 1; j <= star; j++)
//         {
//             printf("*"); 
//         }
//         star+=2;
//         space--;
//         printf("\n"); 

//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int n, star = 1;
//     scanf("%d", &n);
//     int space = n -1;
//     for (int i = 1; i <= n; i++)       //printing lines
//     {   
//         for (int k = 0; k <= space; k++)    //printing space
//         {
//             printf(" "); 
//         }
        
//         for (int j = 1; j <= star; j++)     //printing space
//         {
//             printf("*"); 
//         }
//         printf("\n"); 
//         star++;
//         space--;
//     }
    
//     return 0;
// }


//reverse pyramid

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int star = n;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {   
        for (int i = 1; i <=space; i++)
        {
            printf(" "); 
        }
        
        for (int i = 1; i <= star; i++)
        {
            printf("*"); 
        }
        printf("\n"); 
        space+=1;
        star-=2;
    }
    
    return 0;
}