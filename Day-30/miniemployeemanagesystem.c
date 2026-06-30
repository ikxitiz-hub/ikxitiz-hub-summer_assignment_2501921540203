#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[3];
    int i;

    for(i = 0; i < 3; i++) {
        scanf("%d%s%f", &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\nEmployee Details\n");

    for(i = 0; i < 3; i++)
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);

    return 0;
}