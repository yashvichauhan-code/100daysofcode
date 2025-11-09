//Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    for (int i=i; i*i<=n; i++) {
        if (n%i==0) {
            printf("%d is not prime\n", n);
        }
        else{
            printf("%d is prime\n",n);
        }
    }
    return 0;
}