//Read and print a matrix.
#include<stdio.h>
int main(){
    int m[2][2];
    printf("enter matrix elements: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("matrix elements: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}