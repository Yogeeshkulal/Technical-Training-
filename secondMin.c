#include <stdio.h>

int findSecondMin(int arr[], int size) {
    int min = arr[0], secondMin = arr[1];

    if (secondMin < min) {
        int temp = min;
        min = secondMin;
        secondMin = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] > min && arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }

    return secondMin;
}

int main() {
    int arr[] = {12, 9, 4, 19, 2, 56}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Second minimum: %d\n", findSecondMin(arr, size));

    return 0;
}
