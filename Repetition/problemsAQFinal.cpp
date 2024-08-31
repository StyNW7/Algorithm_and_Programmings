#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidIPv10(const char *ipAddress) {
    int dotCount = 0;

    for (int i = 0; ipAddress[i] != '\0'; i++) {
        if (isdigit(ipAddress[i])) {
            // Continue checking digits
        } else if (ipAddress[i] == '.') {
            // Check if the dot is not the first or last character
            if (dotCount == 0 || dotCount == 5) {
                return 0; // Invalid
            }
            dotCount++;
        } else {
            // Character is not a digit or dot
            return 0; // Invalid
        }
    }

    // Check if there are exactly 5 dots
    return dotCount == 5;
}

int main() {
    char ipAddress[50];

    // Input IP address from the user
    printf("Enter an IPv10 address: ");
    fgets(ipAddress, sizeof(ipAddress), stdin);
    ipAddress[strcspn(ipAddress, "\n")] = '\0'; // Remove newline character

    // Check if the entered IP address is valid
    if (isValidIPv10(ipAddress)) {
        printf("Valid IPv10 address.\n");
    } else {
        printf("Invalid IPv10 address.\n");
    }

    return 0;
}

