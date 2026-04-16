// C program to implement strtok() function (user-defined)

#include <stdio.h>

char* my_strtok(char *str, char delim)
{
    // Static pointer to remember position between calls
    static char *ptr;

    // First call: store the input string
    if(str != NULL)
        ptr = str;

    // If no string left, return NULL
    if(ptr == NULL)
        return NULL;

    // Skip all leading delimiters (like ,, or spaces)
    while(*ptr == delim)
        ptr++;

    // If we reach end after skipping, no tokens left
    if(*ptr == '\0')
    {
        ptr = NULL;
        return NULL;
    }

    // Mark the beginning of the token
    char *start = ptr;

    // Move pointer until we find delimiter or end
    while(*ptr != '\0' && *ptr != delim)
        ptr++;

    // If delimiter found, replace it with '\0' to end token
    if(*ptr == delim)
    {
        *ptr = '\0';   // split string here
        ptr++;         // move to next part
    }
    else
    {
        // If end reached, no more tokens
        ptr = NULL;
    }

    // Return the current token
    return start;
}

int main()
{
    char str[100];
    char delim;

    // Take input string from user
    printf("Enter string: ");
    scanf(" %99[^\n]", str);

    // Take delimiter from user
    printf("Enter delimiter: ");
    scanf(" %c", &delim);

    // Get first token
    char *token = my_strtok(str, delim);

    // Print all tokens one by one
    while(token != NULL)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim); // get next token
    }

    return 0;
}