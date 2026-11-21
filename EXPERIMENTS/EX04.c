#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
    if (left >= right)
        return 1;

    if (str[left] != str[right])
        return 0;

    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    char str[100];

    printf("Enter a binary string: ");
    scanf("%s", str);

    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] != '0' && str[i] != '1') {
            printf("String does not belong to the CFG.\n");
            return 0;
        }
    }

    if (isPalindrome(str, 0, n - 1))
        printf("String belongs to the CFG.\n");
    else
        printf("String does not belong to the CFG.\n");

    return 0;
}