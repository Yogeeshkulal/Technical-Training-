#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MIN_LENGTH 5
#define MAX_LENGTH 15

int isValidUsername(const char *username) {
    int length = strlen(username);
    if (length < MIN_LENGTH || length > MAX_LENGTH)
        return 0;

    if (!isalpha(username[0]))
        return 0;

    for (int i = 0; i < length; i++) {
        if (!isalnum(username[i]))
            return 0;
    }

    return 1; // Valid username
}

int main() {
    char username[50];

    printf("Enter a username: ");
    scanf("%s", username);

    if (isValidUsername(username)) {
        printf("Valid username!\n");
    } else {
        printf("Invalid username! It must:\n");
        printf("- Start with a letter\n");
        printf("- Contain only alphanumeric characters\n");
        printf("- Be between 5 and 15 characters long\n");
    }

    return 0;
}
