#include <stdio.h>

int main() {
    char a[100];  
    char b[100];  
    scanf("%[^\n] %[^\n]", a,b);  
    printf("%s and %s", a,b);  
    return 0;
}
