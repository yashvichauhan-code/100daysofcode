//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main(){
    int matrix[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int num= 1;
    for(int i=0; i<3; i++) {
        for(int j=i+1; j<3; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                num= 0;
                break;
            }
        }
    }
    if(num==1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}