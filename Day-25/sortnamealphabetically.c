#include <stdio.h>
#include <string.h>

int main() {
    char name[10][50], temp[50];
    int n, i, j;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
        gets(name[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");

    for(i = 0; i < n; i++)
        puts(name[i]);

    return 0;
}