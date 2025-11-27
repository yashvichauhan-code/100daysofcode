//Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[25], check;
    printf("enter string: ");
    scanf("%[^\n]", str);
    printf("enter character to check: ");
    scanf(" %c", &check);
    int count=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == check) {
            count++;
        }
    }
    printf("frequency %d",count);
    return 0;
}