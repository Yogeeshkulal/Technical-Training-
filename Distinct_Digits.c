#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void extract_digits(int arr[], int n, int result[], int *size) {
    int seen[10] = {0};
    *size = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        while (num > 0) {
            int digit = num % 10;
            if (!seen[digit]) {
                seen[digit] = 1;
                result[(*size)++] = digit;
            }
            num /= 10;
        }
    }
    qsort(result, *size, sizeof(int), compare);
}

int main() {
    int N[] = {111, 222, 333, 4444, 666};
    int n = sizeof(N) / sizeof(N[0]);
    int result[10], size;
    extract_digits(N, n, result, &size);
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
