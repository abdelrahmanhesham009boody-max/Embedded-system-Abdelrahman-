#include <stdio.h>


float getMax(float a, float b);
int main() {
float x, y;
printf("Enter two numbers: ");
scanf("%f %f", &x, &y);
float maxVal = getMax(x, y);
printf("Maximum: %.2f\n", maxVal);
return 0;
}

float getMax(float a, float b) {
if (a > b) {
return a;
} else {
return b;
}
}
