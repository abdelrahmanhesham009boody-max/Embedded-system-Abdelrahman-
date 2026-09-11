#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 1;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            words++;
        }
        i++;
    }

    printf("Total words = %d\n", words);

    return 0;
}