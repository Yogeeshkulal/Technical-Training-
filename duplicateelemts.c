#include <stdio.h>

int findFirstDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) { 
                return arr[i]; // First duplicate found
            }
        }
    }
    return -1; // No duplicates found
}

int main() {
    int arr[] = {12, 9, 5, 8, 4, 5, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findFirstDuplicate(arr, size);
    
    if (result != -1) {
        printf("First duplicate: %d\n", result);
    } else {
        printf("No duplicates found\n");
    }
    
    return 0;
}
