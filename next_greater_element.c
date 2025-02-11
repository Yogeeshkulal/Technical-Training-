#include <stdio.h>

void nextGreater(int arr[], int res[], int i, int n) {
    if (i == n) return;

    res[i] = -1;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] > arr[i]) {
            res[i] = arr[j];
            break;
        }
    }

    nextGreater(arr, res, i + 1, n);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {6, 8, 0, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res[n];

    nextGreater(arr, res, 0, n);
    printArray(res, n);

    return 0;
}
