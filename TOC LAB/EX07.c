#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a binary string: ");
    scanf("%s", str);

    if (strstr(str, "101") != NULL)
        printf("String belongs to the CFG.\n");
    else
        printf("String does not belong to the CFG.\n");

    return 0;
}