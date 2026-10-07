#include <stdio.h>
#include <windows.h>

int main() {
    int PIN;
    int choice;
    int attempts;
    int unlocked = 0;

    while(unlocked == 0) {

            for(attempts = 1; attempts <= 3; attempts++) {

            printf("Attempt %d of 3\n", attempts);
            printf("\nEnter your PIN: ");
            scanf("%d", &PIN);

            if(PIN < 1000) {
                printf("PIN is too short (must be 4 digits)\n");
            }
            else if(PIN > 9999) {
                printf("PIN is too long (must be 4 digits)\n");
            }
            else {
                printf("PIN is exactly 4 digits\n");
                unlocked = 1;
                break;
            }
        }


        if(unlocked == 0) {

            printf("You have used all 3 attempts.\n");
            printf("\nSystem locked! Wait for 5 seconds...\n");

            for(int i = 5; i >= 1; i--) {
                printf("%d... ", i);
                Sleep(1000);
            }

            printf("\nYou can try again now.\n");
        }
    }

    printf("\n===== Device Menu =====\n");
    printf("1. Open Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");

    printf("Please select an option: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Access granted. Door unlocked.");
            break;

        case 2:
            printf("Change username feature coming soon.");
            break;

        case 3:
            printf("Change PIN feature coming soon.");
            break;

        case 4:
            printf("Exiting system.");
            break;

        default:
            printf("Invalid option! Please try again.");
    }

    return 0;
}
