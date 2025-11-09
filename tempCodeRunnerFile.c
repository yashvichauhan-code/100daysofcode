//Read and print elements of a one-dimensional array.
#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf(arr[i]);
    }
    return 0;
}