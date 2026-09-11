#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student s[3];
    int i, searchRoll, found = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter roll and name for student %d: ", i + 1);
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < 3; i++) {
        if (s[i].roll == searchRoll) {
            printf("Found! Student Name: %s\n", s[i].name);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", searchRoll);
    }

    return 0;
}