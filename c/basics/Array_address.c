#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Address Information:\n");

    for (int i = 0; i < n; i++) {
        printf("Element %d = %d, Address = %p\n",
               i, arr[i], (void *)&arr[i]);
    }

    printf("\nBase address of array = %p\n", (void *)arr);

    return 0;
}