#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int letters = 0, digits = 0, lowercase = 0, uppercase = 0, alphanumeric = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
            if (islower(str[i])) {
                lowercase++;
            } else if (isupper(str[i])) {
                uppercase++;
            }
        }
        if (isdigit(str[i])) {
            digits++;
        }
        if (isalnum(str[i])) {
            alphanumeric++;
        }
    }

    // Print the results
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Alphanumeric characters: %d\n", alphanumeric);

    return 0;
}
