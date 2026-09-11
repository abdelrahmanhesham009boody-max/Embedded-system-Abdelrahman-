#include <stdio.h>

int main() {
    char str[100];
    int i = 0, d = 0, sp = 0;

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= '0' && str[i] <= '9') {
            d++;
        } else if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')) {
            sp++;
        }
        i++;
    }

    printf("Digits = %d\n", d);
    printf("Special characters = %d\n", sp);

    return 0;
}