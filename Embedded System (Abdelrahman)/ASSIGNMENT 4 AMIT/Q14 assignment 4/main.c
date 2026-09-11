#include <stdio.h>
long long factorial(int n);
int main() {
int num;
printf("Enter a non-negative integer: ");
scanf("%d", &num);
if (num < 0) {
 printf("Factorial of a negative number doesn't exist.\n");
} else {

long long result = factorial(num);
 printf("Factorial of %d = %lld\n", num, result);
}
    return 0;
}


long long factorial(int n) {
long long fact = 1;
for (int i = 1; i <= n; i++) {
 fact *= i;
}
return fact;
}