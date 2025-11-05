//Merge two arrays.
#include<stdio.h>
int main(){
    int n1, n2;
    printf("enter no. of elements array 1: ");
    scanf("%d", &n1);
    printf("enter no. of elements array 2: ");
    scanf("%d", &n2);
    int arr1[n1], arr2[n2], total[n1+n2];
    printf("enter %d elements: ", n1);
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("enter %d elements: ", n2);
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i=0; i<n1; i++){
        total[i] = arr1[i];
    }
    for(int i=0; i<n2; i++){
        total[n1 + i] = arr2[i];
    }
    printf("Merged array: ");
    for(int i=0; i<n1+n2; i++){
        printf("%d ", total[i]);
    }
    return 0;
}
