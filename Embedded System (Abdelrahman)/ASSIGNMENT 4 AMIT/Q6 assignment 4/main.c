#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    long long temp = num;
    
    if (temp == 0) {
        count = 1;
    } else {
        if (temp < 0) temp = -temp;
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }

    printf("Number of digits in %lld = %d\n", num, count);
    return 0;
}