/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>
int main(){
    for(int i=5; i>0; i--){
        for(int j=i; j<=5; j++){
            if (j%2!=0){
                printf("*");
            }else{
                printf("\n");
            }
        }
        printf("\n");
    }
return 0;
}