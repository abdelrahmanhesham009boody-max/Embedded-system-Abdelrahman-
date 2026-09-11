#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

struct Student getStudentData() {
    struct Student temp;
    printf("Enter ID: ");
    scanf("%d", &temp.id);
    printf("Enter Name: ");
    scanf("%s", temp.name);
    return temp;
}

int main() {
    struct Student s;

    s = getStudentData();

    printf("\nReceived Data -> ID: %d, Name: %s\n", s.id, s.name);

    return 0;
}