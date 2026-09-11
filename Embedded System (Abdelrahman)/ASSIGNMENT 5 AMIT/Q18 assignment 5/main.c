#include <stdio.h>

int main() {
    char str[100], newStr[100];
    int i = 0, j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            newStr[j] = str[i];
            j++;
        }
        i++;
    }
    newStr[j] = '\0';

    printf("Without spaces: %s", newStr);

    return 0;
}