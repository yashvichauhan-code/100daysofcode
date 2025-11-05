//Reverse an array without taking extra space.
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("reversed array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
//fix
