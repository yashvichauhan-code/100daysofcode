#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // extra space for new element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int add;
    printf("Enter number to insert: ");
    if (scanf("%d", &add) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    int pos = n; // default to end position

    // find position to insert
    for (int i = 0; i < n; i++) {
        if (add < arr[i]) {
            pos = i;
            break;
        }
    }

    // shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // insert new element
    arr[pos] = add;

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
