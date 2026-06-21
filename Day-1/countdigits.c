#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int num = 12345;
    printf("Number of digits in %d is %d\n", num, countDigits(num));
    return 0;
}