#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int i;
    int marks;
    char regNo[15];
    char name[20];

    printf("Enter the number of students: ");
    scanf("%s", &N);

    for(i=1; i<=N; i++){


    printf("Enter Registration Number: ");
    scanf("%d", regNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);

    while (marks < 0 || marks > 100) {
    printf("Invalid marks! Enter marks between 0 and 100: ");
    scanf("%d", &marks);
}

    printf("\n===== STUDENT INFORMATION =====\n");
    printf("Registration Number: %s\n", regNo);
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);

    if (marks >= 70) {
        printf("Grade: A\n");
    }
    else if (marks >= 60) {
        printf("Grade: B\n");
    }
    else if (marks >= 50) {
        printf("Grade: C\n");
    }
    else if (marks >= 40) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: E\n");
    }

     if(marks >= 40) {
        printf("Status: PASS");
    }
    else{
        printf("Status: FAIL");
    }

    printf("\n===============================\n");
    }



    return 0;
}
