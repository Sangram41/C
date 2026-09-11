#include <stdio.h>

int main() {
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter 1st number: ");
    scanf("%d", p1);
    printf("Enter 2nd number: ");
    scanf("%d", p2);

    printf("ADDITION = %d\n", *p1 + *p2);
    printf("SUBTRACTION = %d\n", *p1 - *p2);
    printf("MULTIPLICATION = %d\n", *p1 * *p2);
    printf("DIVISION = %d\n", *p1 / *p2);
    printf("REMAINDER = %d\n", *p1 % *p2);

    return 0;
}