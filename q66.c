//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    /*int add;
    printf("enter no. to be add: ");
    scanf("%d", &add);*/
        for(int i=0; i<n; i++){
            arr[n]=arr[n+1];
            arr[n-i+1]=arr[n-i];
        }
        for(int i=0; i<n; i++){
            printf("%d", i);
        }
    return 0;
}