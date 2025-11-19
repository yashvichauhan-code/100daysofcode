//Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("enter string: ");
    scanf("%[^\n]", str);
    int c=0, v=0;
    for( int i=0; i<strlen(str); i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            v+=1;
        }
        else{
            c+=1;
        }
    }
    printf("vowels= %d  , ", v);
    printf("consonants= %d", c);
    return 0;
}