#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countSegments(char s[])
{
    int count = 0;
    int inWord = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isspace(s[i]))
        {
            if (inWord == 0)
            {
                count++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    return count;
}

int main()
{
    char s[200];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Word Count = %d\n", countSegments(s));

    return 0;
}
