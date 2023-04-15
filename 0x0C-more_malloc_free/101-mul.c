#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_valid_number(const char *num) {
    /* Check if a string represents a valid positive integer. */
    if (!num || !*num)
        return 0;
    while (*num) {
        if (!isdigit(*num))
            return 0;
        if (num[0] == '0' && num[1] != '\0')
            return 0;
        num++;
    }
    return 1;
}

int multiply(const char *num1, const char *num2) {
    /* Multiply two positive integers. */
    int result = 0;
    while (*num2) {
        result = result * 10 + (*num2 - '0') * atoi(num1);
        num2++;
    }
    return result;
}

int main(int argc, char *argv[]) {
    /* Parse command-line arguments and perform the multiplication. */
    if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        fprintf(stderr, "Error\n");
        return 98;
    }
    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);
    return 0;
}
