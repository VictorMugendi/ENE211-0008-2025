#include <stdio.h>
#include <stdlib.h>


int main() {
    int N;
    int i;
    int marks;
    int category;
    char regNo[15];
    char name[20];

    printf("Enter the number of students: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++){


    printf("Enter Registration Number: ");
    scanf("%s", regNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);

    while (marks < 0 || marks > 100) {
    printf("Invalid marks! Enter marks between 0 and 100: ");
    scanf("%d", &marks);
    }
    category = marks / 10;

    printf("\n===== STUDENT INFORMATION =====\n");
    printf("Registration Number: %s\n", regNo);
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);

    switch(category) {
    case 10:
    case 9:
    case 8:
    case 7:
        printf("Grade: A\n");
        break;

    case 6:
        printf("Grade: B\n");
        break;

    case 5:
        printf("Grade: C\n");
        break;

    case 4:
        printf("Grade: D\n");
        break;

    default:
        printf("Grade: E\n");
        break;

    }

     switch(marks / 40) {
            case 0:
                printf("Status: FAIL\n");
                break;

            default:
                printf("Status: PASS\n");
                break;
        }

    printf("\n===============================\n");
    }



    return 0;
}
