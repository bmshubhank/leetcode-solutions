#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(const char *s) {
    int length = (int)strlen(s);
    char *stack = malloc((length + 1) * sizeof(char));
    int top = 0;

    if (stack == NULL) {
        return false;
    }

    for (int i = 0; i < length; i++) {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            stack[top++] = current;
        } else {
            if (top == 0 ||
                (current == ')' && stack[top - 1] != '(') ||
                (current == ']' && stack[top - 1] != '[') ||
                (current == '}' && stack[top - 1] != '{')) {
                free(stack);
                return false;
            }
            top--;
        }
    }

    free(stack);
    return top == 0;
}

int main(void) {
    printf("Normal case: %s\n", isValid("()[]{}") ? "true" : "false");
    printf("Edge case: %s\n", isValid("(") ? "true" : "false");

    return 0;
}
