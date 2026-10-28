#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i = 0;
    int zerosLeft = 0;
    int zerosRight = 0;

    printf("Enter a binary string: ");
    scanf("%s", str);

    n = strlen(str);

    while (i < n && str[i] == '0') {
        zerosLeft++;
        i++;
    }

    while (i < n && str[i] == '1') {
        i++;
    }

    while (i < n && str[i] == '0') {
        zerosRight++;
        i++;
    }

    if (i != n) {
        printf("String does not belong to the CFG.\n");
        return 0;
    }

    if (zerosLeft == zerosRight)
        printf("String belongs to the CFG.\n");
    else
        printf("String does not belong to the CFG.\n");

    return 0;
}