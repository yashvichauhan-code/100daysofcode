//Search in a sorted array using binary search.
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
    int search;
    printf("enter no. to be searched: ");
    scanf("%d", &search);
    for(int i=0; i<n; i++){
        if(arr[i]!=search){
            printf("number not found !");
        }
    }
    if (arr[n/2-1]>search){
        for(int i=0; i<n/2; i++){
            if(arr[i]==search){
                printf("found at index %d", i);
            }
        }
    }
    else if(arr[n/2]-1<search){
        for(int i=n/2; i<n; i++){
            if(arr[i]==search){
                printf("found at index %d", i);
            }
        }
    }
    return 0;
}