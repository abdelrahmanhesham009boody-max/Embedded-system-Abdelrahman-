#include <stdio.h>

int main() {
    char str[100], oldC, newC;
    int i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to replace: ");
    scanf(" %c", &oldC);

    printf("Enter new character: ");
    scanf(" %c", &newC);

    while (str[i] != '\0') {
        if (str[i] == oldC) {
            str[i] = newC;
        }
        i++;
    }

    printf("New string: %s", str);

    return 0;
}