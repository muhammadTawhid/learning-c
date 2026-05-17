#include <stdio.h>

int count_length(char s[], int n){
    if (s[n] == '\0')
    {
        return 0;
    }
    
    int count = count_length(s, n+1);
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U' )
    {
        return count+1;
    }
    else
    {
        return count;
    }
    
    
}

int main(){
    char s[201];
    fgets(s, 201, stdin);
    int len = count_length(s, 0);
    printf("%d ", len); 
    return 0;
}