//C program to count frequency of each character in a given string

#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("Character frequencies:\n");

    // Loop through each character
    for(i = 0; str[i] != '\0'; i++) {
        // Check if this character was already counted
        int alreadyCounted = 0;
        for(j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if(!alreadyCounted) {
            // Count how many times str[i] appears
            count = 0;
            for(j = 0; str[j] != '\0'; j++) {
                if(str[i] == str[j])
                    count++;
            }
            printf("%c : %d\n", str[i], count);
        }
    }

    return 0;
}