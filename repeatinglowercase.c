//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[25], check;
    printf("enter string: ");
    scanf("%[^\n]", str);
    for (int i=0; str[i]!='\0'; i++){
        if(str[i]>= 'a' && str[i]<='z'){
            for(int j=i+1; str[j]!='\0'; j++){
                if(str[i]==str[j]){
                    printf("first repeating lowercase alphabet is: %c", str[j]);
                    return 0;
                }
            }
        }
    }
    return 0;
}