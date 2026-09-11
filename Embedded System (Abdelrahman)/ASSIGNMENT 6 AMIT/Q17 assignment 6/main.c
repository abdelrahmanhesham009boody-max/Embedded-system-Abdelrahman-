#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student s1 = {101, "Ali"};
    struct Student *ptr;

    ptr = &s1;

    printf("Accessing using pointer:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);

    return 0;
}