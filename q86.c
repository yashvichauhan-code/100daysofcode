//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("enter string : ");
    scanf("%[^\n]",str);
    char rev[20];
    for(int i=0; i<strlen(str); i++){
        rev[i]=str[strlen(str)-i-1];
    }
    if(strcmp(str,rev)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}