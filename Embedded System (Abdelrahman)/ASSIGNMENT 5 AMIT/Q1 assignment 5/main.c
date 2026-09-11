#include <stdio.h>

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("String is: %s\n", str);

    return 0;
}