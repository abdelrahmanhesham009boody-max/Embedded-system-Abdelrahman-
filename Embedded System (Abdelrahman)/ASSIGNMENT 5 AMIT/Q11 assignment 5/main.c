#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, flag = 1;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}