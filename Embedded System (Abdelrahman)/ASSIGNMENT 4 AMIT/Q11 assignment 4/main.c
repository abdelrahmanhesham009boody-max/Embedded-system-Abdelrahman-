#include <stdio.h>


float add(float a, float b);

int main() {
float x, y;
printf("Enter two numbers: ");
scanf("%f %f", &x, &y);

float sum = add(x, y);
printf("Sum = %.2f\n", sum);

return 0;
}

float add(float a, float b) {
    return a + b;
}