#include <stdio.h>


double square(double num);

int main() {
double num;
printf("Enter a number: ");
scanf("%lf", &num);


double result = square(num);
printf("Square of %.2lf = %.2lf\n", num, result);
return 0;
}


double square(double num) {
 return num * num;
}