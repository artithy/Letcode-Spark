#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
    int len = strlen(s);
    int length = 0;
    int i = len - 1;

    while (i >= 0)
    {
        if (s[i] != ' ')
        {
            length++;
        }
        else if (length > 0)
        {
            break;
        }
        i--;
    }

    return length;
}

int main()
{
    char s[] = "Hello World  ";
    int lastWordLen = lengthOfLastWord(s);
    printf("%d\n", lastWordLen);
    return 0;
}
