#include <stdio.h>
#include <string.h>

int longestValidParentheses(char *s)
{
    int maxLen = 0;
    int len = strlen(s);
    int stack[len + 1];  
    int top = -1;        

    stack[++top] = -1;  

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            stack[++top] = i;  
        }
        else
        {
            top--;  
            if (top == -1)
            {
                stack[++top] = i;  
            }
            else
            {
                int currentLen = i - stack[top];
                if (currentLen > maxLen)
                {
                    maxLen = currentLen;
                }
            }
        }
    }

    return maxLen;
}

int main(int argc, char const *argv[])
{
    char s[30000];
    gets(s);
    printf("%d",longestValidParentheses(s));    
    return 0;
}
