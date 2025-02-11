#include <stdio.h>

void prefix_sum(int arr[], int n, int prefix[]) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

int main() {
    int Sales[] = {10, 20, 15, 30, 25};
    int n = sizeof(Sales) / sizeof(Sales[0]);
    int PrefixSum[n];
    prefix_sum(Sales, n, PrefixSum);
    for (int i = 0; i < n; i++) {
        printf("%d ", PrefixSum[i]);
    }
    printf("\n");
    return 0;
}
