#include <stdio.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, rem;

    while (temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int num;
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}