// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     int zero = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         // printf("%d", a[3]); 
//         // if (a[i] == 0)
//         // {
//         //     zero++;
//         // }
        

//     }
    
//     printf("%d ", a[2]);
    
//     return 0;
// }


#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // int cnt0 = 0, cnt1 = 0;
    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        // if(a[i] == 0){
        //    fre[0]++;
        // }
        // if(a[i] == 1){
        //     fre[1]++;
        // }
        int m = a[i];
        fre[m]++;
    }
    printf("%d->%d\n",0, fre[0]); 
    printf("%d-> %d",1, fre[1]); 
    

    

    return 0;
}





















