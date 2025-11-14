//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int m,n;
    printf("enter no of rows and coloumns :");
    scanf("%d %d", &m,&n);
    int arr[m][n];
    int sum[m];
    printf("enter elements: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<m; i++) {
        int s = 0;
        for (int j = 0; j < n; j++) {
            s += arr[i][j];
        }
        sum[i] = s;
    }
    for(int i=0; i<m; i++){
        printf("%d   ", sum[i]);
    }
    return 0;
}