/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter lines: ");
    scanf("%d", &n);
    for (int i=n; i>0; i--){
        for(int s=n; s>0; s--){
            printf(" ");
        }
        for(int k=i; k<=n; k++){
                printf("   *");
        }
        printf("\n");
    }
    return 0;
}