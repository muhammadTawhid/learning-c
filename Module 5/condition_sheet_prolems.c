// problem A Say Hello With C++
// #include <stdio.h>

// int main(){
//     char name[100];
//     scanf("%s", name);
//     printf("Hello, %s", name); 
//     return 0;
// }

// B. Basic Data Types
// #include <stdio.h>

// int main(){
//     int a;
//     long long int b;
//     char c;
//     float d;
//     double e;
//     scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
//     printf("%d\n%lld\n%c\n%.2f\n%.1f", a, b, c, d, e); 
//     return 0;
// }

//C. Simple Calculator

// #include <stdio.h>

// int main(){
//     long long int a, b;
//     scanf("%lld %lld", &a, &b);

//     long long int summation = a + b;
//     long long int multiplication = a * b;
//     long long int substraction = a - b;

//     printf("%lld + %lld = %lld\n", a, b, summation);     
//     printf("%lld * %lld = %lld\n", a, b, multiplication);     
//     printf("%lld - %lld = %lld\n", a, b, substraction);     
//     return 0;
// }

// D Difference

// #include <stdio.h>

// int main(){
//     long long int a, b, c, d;
//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
//     long long int x = (a*b) - (c*d);
//     printf("Difference = %lld", x); 
//     return 0;
// }

// E. Area of a Circle
// #include <stdio.h>

// int main(){
//     double r;
//     scanf("%lf", &r);
//     double pi = 3.141592653;

//     double multiplication = pi * (r*r);
//     printf("%.9f", multiplication); 
//     return 0;
// }

// F. Digits Summation

// #include <stdio.h>

// int main(){
//     long long int n, m;
//     scanf("%lld %lld", &n, &m);
//     long long int summation = (n%10) + (m%10);
//     printf("%d", summation);
//     return 0;
// }

//

//G. Summation from 1 to N
// #include <stdio.h>

// int main(){
//     long long int num = 0;
//     scanf("%lld", &num);
//     long long int summation = num* (num+1)/2;
//     printf("%lld", summation); 
//     return 0;
// }

// H. Two numbers
#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int fl = floor((double)a/b);
    printf("floor %d / %d = %d", a, b, fl);
    
    int cl = ceil((double)a/b);
    printf("\nceil %d / %d = %d", a, b, cl);

    int rn = round((double)a/b);
    printf("\nround %d / %d = %d", a, b, rn);


    return 0;
}