// #include <stdio.h>

// void sum(int i){
//     if (i == 10)
//     {
//         return;
//     }
//     printf("%d\n", i); 
//     sum(i+1);
    
// }

// int main(){
//     int i = 0;
//     sum(i);
//     return 0;
// }


#include <stdio.h>

int sum(int i){
    if (i == 1)
    {
        return;
    }
    
    printf("%d\n", i); 
    sum(i-1);
}

int main(){
    sum(10);
    return 0;
}