#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (n >= 2 && str[0] == '0' && str[n - 1] == '1') {
        int valid = 1;

        for (int i = 0; i < n; i++) {
            if (str[i] != '0' && str[i] != '1') {
                valid = 0;
                break;
            }
        }

        if (valid)
            printf("String belongs to the CFG.\n");
        else
            printf("String does not belong to the CFG.\n");
    } else {
        printf("String does not belong to the CFG.\n");
    }

    return 0;
}