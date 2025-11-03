//Find the maximum and minimum element in an array.
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
    int max=arr[0];
    int min=arr[1];
    if (max<min){
        max=arr[1];
        min=arr[0];
    }
    for(int i=2; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    printf("max = %d ", max);
    printf("min = %d ", min);
    return 0;
    }
}