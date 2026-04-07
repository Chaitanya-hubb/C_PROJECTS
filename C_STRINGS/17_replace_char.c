//C program to replace a char in a given string

#include <stdio.h>

int main()
{
    char str[50], old_ch, new_ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter a charcater to replace with new character: ");
    fflush(stdin);
    scanf(" %c", &old_ch);

    printf("Enter new charcater: ");
    scanf(" %c", &new_ch);

    printf("Old: %c, New: %c\n", old_ch, new_ch);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == old_ch || str[i] == old_ch - 32 || str[i] == old_ch + 32)
        {
            str[i] = new_ch;
        }
    }
    printf("Updated string is: %s", str);
    return 0;
}
