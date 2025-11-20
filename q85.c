//Reverse a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    printf("enter string: ");
    scanf("%[^\n]", str);
    char rev[20];
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0; 
}
