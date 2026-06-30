#include <stdio.h>

int main() {
    int roll[5], marks[5], i;
    char name[5][30];

    for(i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        scanf("%d%s%d", &roll[i], name[i], &marks[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < 5; i++)
        printf("%d %s %d\n", roll[i], name[i], marks[i]);

    return 0;
}