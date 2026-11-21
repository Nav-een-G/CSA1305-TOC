#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i = 0;
    int zeros = 0, ones = 0;

    printf("Enter a binary string: ");
    scanf("%s", str);

    n = strlen(str);

    while (i < n && str[i] == '0') {
        zeros++;
        i++;
    }

    while (i < n && str[i] == '1') {
        ones++;
        i++;
    }

    if (i == n && zeros == ones)
        printf("String belongs to the CFG.\n");
    else
        printf("String does not belong to the CFG.\n");

    return 0;
}