#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (str[0] != 'o') {
        printf("Rejected\n");
        return 0;
    }

    if (str[n - 1] != '1') {
        printf("Rejected\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (str[i] != 'o' && str[i] != '1') {
            printf("Rejected\n");
            return 0;
        }
    }

    printf("Accepted\n");

    return 0;
}