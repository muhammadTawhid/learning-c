// // problem 1
// #include <stdio.h>

// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a >= b)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }

//     return 0;
// }

// problem 2
//  #include <stdio.h>

// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a%b == 0 || b%a ==0)
//     {
//         printf("Multiples");
//     }
//     else
//     {
//         printf("No Multiples");
//     }

//     return 0;
// }

// problem 3
//  #include <stdio.h>

// int main(){
//     int a;
//     scanf("%d", &a);
//     int firstDigit = a / 1000;
//     int lastDigit = a % 10;
//     if (firstDigit%2 == 0)
//     {
//         printf("EVEN");
//     }
//     else
//     {
//         printf("ODD");
//     }

//     return 0;
// }

// problem 4

// #include <stdio.h>

// int main(){

//     char text;
//     scanf("%c", &text);
//     if (text >= 'a' && text <= 'z')
//     {
//         printf("%c", text - 32);
//     }
//     else
//     {
//         printf("%c", text+32);
//     }

//     return 0;
// }

// problem 4

// #include <stdio.h>

// int main()
// {
//     char text;
//     scanf("%c", &text);

//     if (text >= '0' && text <= '9')
//     {
//         printf("IS DIGIT");
//     }

//     else
//     {
//         printf("ALPHA\n"); 
//         if (text >= 'a' && text <= 'z')
//         {
//             printf("IS SMALL");
//         }
//         else
//         {
//             printf("IS CAPITAL");
//         }
//     }

//     return 0;
// }


//problem 5

// #include <stdio.h>

// int main(){
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     //minimum
//     if (a <= b && a <= c)
//     {
//         printf("%d ",a); 
//     }
//     else if (b <= a && b <= c)
//     {
//         printf("%d ",b); 
//     }
    
//     else if (c <= a && c <= b)
//     {
//         printf("%d ",c); 
//     }

//     //maximum
//     if (a >= b && a >= c)
//     {
//         printf("%d ",a); 
//     }
//     else if (b >= a && b >= c)
//     {
//         printf("%d ",b); 
//     }
    
//     else if (c >= a && c >= b)
//     {
//         printf("%d ",c); 
//     }
    
    
//     return 0;
// }

#include <stdio.h>

int main(){
    int x = 1;
    if (x<5)
    {
        printf("A"); 
    }
    else if (x<=10)
    {
        printf("A-"); 
    }
    else
    {
        printf("no"); 
    }
    
    
    return 0;
}