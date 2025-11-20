//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main() {
    char str[25];
    printf("enter string: ");
    scanf("%[^\n]", str);
    int spc = 0, dig = 0, special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spc++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            dig++;
        }
        else if (str[i] == '$' || str[i] == '#' || str[i] == '@' ||
                 str[i] == '*' || str[i] == '%' || str[i] == '&' ||
                 str[i] == '!' || str[i] == '?') {
            special++;
        }
    }
    printf("spaces = %d, digits = %d, special = %d\n", spc, dig, special);
    return 0;
}
