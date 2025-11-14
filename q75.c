//Add two matrices.
#include <stdio.h>
int main(){
    int m,n;
    printf("enter no of rows and coloumns :");
    scanf("%d %d", &m,&n);
    int arr[m][n];
    int arr2[m][n];
    printf("enter elements for fist matrix : ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter elements for fist matrix : ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    printf("sum of matrices: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}