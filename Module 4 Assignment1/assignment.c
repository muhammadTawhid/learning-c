//assignment 1

// #include<stdio.h>

// int main(){
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");

//     return 0;
// }

//assignment2
// #include<stdio.h>

// int main(){
//     long long int a, b;
//     scanf("%lld %lld", &a, &b);

//     long long multiplication = a * b;
//     printf("%lld", multiplication);

//     return 0;
// }

//assignment 3
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
    
//     if(n%3 == 0){
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
    
    
//     return 0;
// }

// assignment 4

// #include<stdio.h>

// int main(){
//     int n = 0;
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++)
//     {
//         if(i%3 == 0 && i%7 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }


//assignment 5

#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);

    if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        int balance = n - 1000;
        if(balance >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }

    else
    {
        printf("Bad luck");
    }
    
    return 0;
}