#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // find end of str1
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    // copy str2 into str1 starting at position i
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // terminate the new string

    printf("Concatenated string: %s\n", str1);

    return 0;
}