#include <stdio.h>

int main() {
    char str[100];
    int i = 0, up = 0, low = 0;

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') up++;
        else if (str[i] >= 'a' && str[i] <= 'z') low++;
        i++;
    }

    printf("Uppercase = %d\n", up);
    printf("Lowercase = %d\n", low);

    return 0;
}