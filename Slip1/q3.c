#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nID\tName\tSalary\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}