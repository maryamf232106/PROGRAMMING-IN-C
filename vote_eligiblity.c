#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible to vote.");
    } else {
        if (age < 0) {
            printf("Invalid age.");
        } else {
            printf("Not eligible to vote.");
        }
    }

    return 0;
}