//Check if a matrix is symmetric.
#include <stdio.h>
int main(){
    int r,c;
    printf("enter rows: ");
    scanf("%d", &r);
    printf("enter colombs: ");
    scanf("%d", &c);
    int matrix[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int transp[c][r];
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++ ){
            transp[j][i]=matrix[i][j];
        }
    }
    printf("transpose: \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++ ){
            printf("%d ", transp[i][j]);
        }
        printf("\n");
    }
    int same = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != transp[i][j]) {
                same = 0;
                break;
            }
        }
    }
    if (same==0){
        printf("false");
    }
    else if(same==1){
        printf("true");
    }

    return 0;
}