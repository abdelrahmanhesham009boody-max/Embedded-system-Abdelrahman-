#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

struct Employee updateSalary(struct Employee emp, float bonus) {
    emp.salary += bonus;
    return emp;
}

int main() {
    struct Employee e;
    float bonus;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter current salary: ");
    scanf("%f", &e.salary);

    printf("Enter bonus to add: ");
    scanf("%f", &bonus);

    e = updateSalary(e, bonus);

    printf("\nUpdated Salary: %.2f\n", e.salary);

    return 0;
}