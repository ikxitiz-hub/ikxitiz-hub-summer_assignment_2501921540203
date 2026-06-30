#include <stdio.h>

void display(int roll[], char name[][30], int marks[], int n) {
    int i;

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
        printf("%d %s %d\n", roll[i], name[i], marks[i]);
}

int main() {
    int roll[5], marks[5], i;
    char name[5][30];

    for(i = 0; i < 5; i++) {
        printf("Enter Roll Name Marks: ");
        scanf("%d%s%d", &roll[i], name[i], &marks[i]);
    }

    display(roll, name, marks, 5);

    return 0;
}