#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai 4.Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Q2. 2 + 2 = ?\n");
    printf("1.3 2.4 3.5 4.6\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Final Score = %d/2", score);

    return 0;
}