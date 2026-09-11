#include <stdio.h>


int isPrime(int n);
int main() {
int num;
printf("Enter an integer: ");
scanf("%d", &num);


if (isPrime(num)) {
printf("%d is a Prime number.\n", num);
} else {
printf("%d is not a Prime number.\n", num);
}

return 0;
}

int isPrime(int n) {
if (n <= 1) return 0;
for (int i = 2; i * i <= n; i++) {
if (n % i == 0) return 0;
}
return 1;
}