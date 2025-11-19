//Print each character of a string on a new line.
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; i<strlen(str); i++){
        printf("%c\n", str[i]);
    }
    return 0;
}