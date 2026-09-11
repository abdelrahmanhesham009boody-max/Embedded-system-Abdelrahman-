#include <stdio.h>


int isEven(int num);

int main() {
int num;
printf("Enter an integer: ");
scanf("%d", &num);

if (isEven(num)) {
 printf("%d is Even.\n", num);
} else {
 printf("%d is Odd.\n", num);
 }

return 0;
}

// Implementation
int isEven(int num) {
return (num % 2 == 0);
}