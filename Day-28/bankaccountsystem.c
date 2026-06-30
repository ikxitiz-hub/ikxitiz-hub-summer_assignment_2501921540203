#include <stdio.h>

int main() {
    float balance = 5000, amount;
    int choice;

    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%f", &amount);
            balance += amount;
            break;

        case 2:
            scanf("%f", &amount);
            if(amount <= balance)
                balance -= amount;
            else
                printf("Insufficient Balance\n");
            break;

        case 3:
            break;

        default:
            printf("Invalid Choice\n");
    }

    printf("Balance = %.2f", balance);

    return 0;
}