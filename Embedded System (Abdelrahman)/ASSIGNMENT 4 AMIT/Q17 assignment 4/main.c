#include <stdio.h>

float celsiusToFahrenheit(float celsius);
int main() {
float c;
printf("Enter temperature in Celsius: ");
scanf("%f", &c);
float f = celsiusToFahrenheit(c);
printf("%.2f°C = %.2f°F\n", c, f);
return 0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}