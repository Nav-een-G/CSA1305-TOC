#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (str[0] != 'b') {
        printf("Rejected\n");
        return 0;
    }

    if (str[n - 1] != 'a') {
        printf("Rejected\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            printf("Rejected\n");
            return 0;
        }
    }

    printf("Accepted\n");

    return 0;
}