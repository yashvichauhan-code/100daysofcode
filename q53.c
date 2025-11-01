/*
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines: ");
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        for(int j=i; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(j%i!=0){
                printf("*");
            }
        }
        printf("\n");
        }
    return 0;
}
//fix