//Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
    int n, m;
    printf("enter number of rows : ");
    scanf("%d", &n);
    printf("enter number of coloumb : ");
    scanf("%d", &m);
    int arr[n][m];
    printf("enter matrix elements: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("sum of all elemrnts of the matrix : ");
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}