#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[20];
    int age;
    char hobies[100];
    scanf("%s %d %s" , name , &age , hobies);
    printf("Name: %s\n" , name);
    printf("Age: %d\n" , age);
    printf("Hobby: %s\n" , hobies);
    return 0;
}