#include <stdio.h>

int isValid(char s[])
{
    char stack[1000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[')
        {
            stack[++top] = c;
        }
        else
        {
            if (top == -1)
                return 0;

            char last = stack[top--];
            if ((c == ')' && last == '(') ||
                (c == '}' && last == '{') ||
                (c == ']' && last == '['))
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    printf("%s\n", isValid("()") ? "true" : "false");
    printf("%s\n", isValid("({)}") ? "true" : "false");

    return 0;
}
