#include <stdio.h>

int sumOfDigits(int num);
int main() {
int num;
 printf("Enter an integer: ");
scanf("%d", &num);

int total = sumOfDigits(num);
printf("Sum of digits = %d\n", total);
return 0;
}

int sumOfDigits(int num) {
int sum = 0;
if (num < 0) num = -num;
while (num > 0) {
sum += num % 10;
num /= 10;
}
return sum;
}