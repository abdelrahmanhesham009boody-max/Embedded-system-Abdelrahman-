#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

void printStudent(struct Student s) {
    printf("\nID: %d\n", s.id);
    printf("Name: %s\n", s.name);
}

int main() {
    struct Student st;

    printf("Enter ID: ");
    scanf("%d", &st.id);
    printf("Enter Name: ");
    scanf("%s", st.name);

    printStudent(st);

    return 0;
}