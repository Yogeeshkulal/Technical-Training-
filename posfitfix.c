#include <stdio.h>

void postfix_sum(int arr[], int n, int postfix[]) {
    postfix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        postfix[i] = postfix[i + 1] + arr[i];
    }
}

int main() {
    int Fuel[] = {5, 10, 3, 7, 8};
    int n = sizeof(Fuel) / sizeof(Fuel[0]);
    int PostfixSum[n];
    postfix_sum(Fuel, n, PostfixSum);
    for (int i = 0; i < n; i++) {
        printf("%d ", PostfixSum[i]);
    }
    printf("\n");
    return 0;
}
