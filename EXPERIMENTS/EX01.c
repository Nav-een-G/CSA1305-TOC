#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (n == 0) {
        printf("Rejected\n");
        return 0;
    }

    if (str[0] != 'a') {
        printf("Rejected\n");
        return 0;
    }

    state = 1;

    for (int i = 1; i < n; i++) {
        if (str[i] == 'a')
            state = 1;
        else if (str[i] == 'b')
            state = 2;
        else {
            printf("Rejected\n");
            return 0;
        }
    }

    if (state == 1)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}