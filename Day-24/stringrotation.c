#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    gets(str1);
    gets(str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}