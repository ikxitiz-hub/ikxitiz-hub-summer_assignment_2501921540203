#include <stdio.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, max = 0, start = 0;

    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0')
            j++;
        else {
            if(j > max) {
                max = j;
                start = i - j;
            }
            j = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    for(i = 0; i < max; i++)
        longest[i] = str[start + i];

    longest[max] = '\0';

    printf("Longest Word = %s", longest);

    return 0;
}