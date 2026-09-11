#include <stdio.h>

int main() {
int n;
float num, max;

printf("Enter total number of elements: ");
scanf("%d", &n);

if (n <= 0) {
printf("Invalid input.\n");
return 0;
}

printf("Enter number 1: ");
scanf("%f", &max);

for (int i = 2; i <= n; i++) {
 printf("Enter number %d: ", i);
 scanf("%f", &num);
if (num > max) {
 max = num;
}
}

printf("Largest number is: %.2f\n", max);
return 0;
}