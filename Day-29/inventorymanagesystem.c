#include <stdio.h>

struct Item {
    int id, qty;
    char name[30];
};

int main() {
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.qty);

    printf("\nInventory Details\n");
    printf("ID : %d\n", item.id);
    printf("Name : %s\n", item.name);
    printf("Quantity : %d\n", item.qty);

    return 0;
}