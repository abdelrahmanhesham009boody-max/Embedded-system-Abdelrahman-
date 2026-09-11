#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    printf("\nEarlier Date: ");
    if (d1.year < d2.year)
        printf("%02d/%02d/%04d\n", d1.day, d1.month, d1.year);
    else if (d1.year > d2.year)
        printf("%02d/%02d/%04d\n", d2.day, d2.month, d2.year);
    else {
        if (d1.month < d2.month)
            printf("%02d/%02d/%04d\n", d1.day, d1.month, d1.year);
        else if (d1.month > d2.month)
            printf("%02d/%02d/%04d\n", d2.day, d2.month, d2.year);
        else {
            if (d1.day <= d2.day)
                printf("%02d/%02d/%04d\n", d1.day, d1.month, d1.year);
            else
                printf("%02d/%02d/%04d\n", d2.day, d2.month, d2.year);
        }
    }

    return 0;
}