#include <stdio.h>
#include <string.h>

int main() {
    // Hardcoded username and password
    char correctUsername[] = "admin";
    char correctPassword[] = "12345";

    // Variables to store user input
    char inputUsername[50];
    char inputPassword[50];

    // Get username and password from user
    printf("Enter username: ");
    scanf("%s", inputUsername);

    printf("Enter password: ");
    scanf("%s", inputPassword);

    // Check if the username and password match
    if (strcmp(inputUsername, correctUsername) == 0 && strcmp(inputPassword, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}
