//Find the sum of array elements.
#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter element: ");
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("sum = %d ", sum);
    return 0;
}