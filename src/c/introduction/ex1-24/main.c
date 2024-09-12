#include <stdio.h>

int main() {
    int c;
    int parentheses = 0, brackets = 0, braces = 0;
    int in_single_quote = 0, in_double_quote = 0, in_comment = 0;
    int prev_char = 0;

    while ((c = getchar()) != EOF) {
        // Handle comments
        if (in_comment) {
            if (prev_char == '*' && c == '/') {
                in_comment = 0;  // Exiting comment
            }
        } else if (!in_single_quote && !in_double_quote) {
            if (prev_char == '/' && c == '*') {
                in_comment = 1;  // Entering comment
            }
        }

        // Handle single and double quotes
        if (!in_comment) {
            if (c == '\'' && !in_double_quote && prev_char != '\\') {
                in_single_quote = !in_single_quote;  // Toggle single quote state
            } else if (c == '"' && !in_single_quote && prev_char != '\\') {
                in_double_quote = !in_double_quote;  // Toggle double quote state
            }
        }

        // Handle parentheses, brackets, and braces outside of quotes and comments
        if (!in_single_quote && !in_double_quote && !in_comment) {
            if (c == '(') {
                parentheses++;
            } else if (c == ')') {
                parentheses--;
            } else if (c == '[') {
                brackets++;
            } else if (c == ']') {
                brackets--;
            } else if (c == '{') {
                braces++;
            } else if (c == '}') {
                braces--;
            }
        }

        // Store current character as previous for next iteration
        prev_char = c;
    }

    // Report any unmatched syntax errors
    if (parentheses != 0) {
        printf("Unmatched parentheses: %d\n", parentheses);
    }
    if (brackets != 0) {
        printf("Unmatched brackets: %d\n", brackets);
    }
    if (braces != 0) {
        printf("Unmatched braces: %d\n", braces);
    }
    if (in_single_quote) {
        printf("Unmatched single quote\n");
    }
    if (in_double_quote) {
        printf("Unmatched double quote\n");
    }
    if (in_comment) {
        printf("Unclosed comment\n");
    }

    return 0;
}
