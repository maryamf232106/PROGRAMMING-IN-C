#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks obtained (0 to 100): ");
    scanf("%d", &marks);

    
    if (marks >= 90 && marks <= 100)
     {
        printf("Grade A");
    } else if (marks >= 75 && marks <= 89)
     {
        printf("Grade B");
    } else if (marks >= 50 && marks <= 74)
     {
        printf("Grade C");
    } else if (marks >= 0 && marks < 50)
     {
        printf("Grade F");
    } else {
        printf("Invalid marks entered.");
    }

    return 0;
}