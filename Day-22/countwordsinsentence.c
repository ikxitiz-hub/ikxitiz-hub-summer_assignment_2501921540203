#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 1;

    gets(str);

    while(str[i] != '\0') {
        if(str[i] == ' ')
            words++;
        i++;
    }

    printf("Words = %d", words);

    return 0;
}