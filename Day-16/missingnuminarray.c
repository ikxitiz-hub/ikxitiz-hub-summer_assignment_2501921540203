#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, total;

    scanf("%d", &n);   // n = total numbers including missing one

    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}