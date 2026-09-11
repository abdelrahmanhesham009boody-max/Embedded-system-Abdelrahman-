#include <stdio.h>

long long factorial(int n);

int main() {
int N;
printf("Enter N: ");
scanf("%d", &N);
printf("Factorials from 1 to %d:\n", N);
for (int i = 1; i <= N; i++) {  
printf("%d! = %lld\n", i, factorial(i));
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