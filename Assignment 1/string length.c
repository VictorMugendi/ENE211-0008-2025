#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is: %s\n", name);

    printf("The length of your name is: %lu\n", strlen(name));

    return 0;
}
