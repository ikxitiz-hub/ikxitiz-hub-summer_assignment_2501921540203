#include <stdio.h>

struct Book {
    int id;
    char title[30];
};

int main() {
    struct Book b[3];
    int i;

    for(i = 0; i < 3; i++) {
        scanf("%d%s", &b[i].id, b[i].title);
    }

    printf("\nLibrary Books\n");

    for(i = 0; i < 3; i++)
        printf("%d %s\n", b[i].id, b[i].title);

    return 0;
}