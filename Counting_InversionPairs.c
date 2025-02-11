#include <stdio.h>

int count_inversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int P[] = {30, 45, 25, 60, 20};
    int n = sizeof(P) / sizeof(P[0]);
    printf("The inversion count is %d\n", count_inversions(P, n));
    return 0;
}
