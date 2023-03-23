#include <stdio.h>

int main() {
    int n, m, i, j, temp;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of m: ");
    scanf("%d", &m);

    // sort the array in ascending order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // find the mth minimum value
    int min_val = arr[m-1];

    // find the mth maximum value
    int max_val = arr[n-m];

    // calculate the sum and difference
    int sum = min_val + max_val;
    int diff = max_val - min_val;

    printf("The mth minimum value is: %d\n", min_val);
    printf("The mth maximum value is: %d\n", max_val);
    printf("The sum of the mth minimum and maximum values is: %d\n", sum);
    printf("The difference between the mth minimum and maximum values is: %d\n", diff);

    return 0;
}
