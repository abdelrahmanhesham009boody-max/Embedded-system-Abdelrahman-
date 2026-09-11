#include <stdio.h>

struct Address {
    char city[50];
    int pinCode;
};

struct Student {
    int roll;
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter city: ");
    scanf("%s", s.addr.city);
    printf("Enter pin code: ");
    scanf("%d", &s.addr.pinCode);

    printf("\n--- Student Details ---\n");
    printf("Roll: %d\nName: %s\nCity: %s\nPin Code: %d\n", s.roll, s.name, s.addr.city, s.addr.pinCode);

    return 0;
}