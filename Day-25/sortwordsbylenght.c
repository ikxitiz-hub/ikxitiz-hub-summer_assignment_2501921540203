#include <stdio.h>
#include <string.h>

int main() {
    char word[10][50], temp[50];
    int n, i, j;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
        gets(word[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    for(i = 0; i < n; i++)
        puts(word[i]);

    return 0;
}