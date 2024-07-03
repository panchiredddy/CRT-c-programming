#include <stdio.h>

int is_even(int number) {
    return (number & 1) == 0;
}

int is_odd(int number) {
    return (number & 1) == 1;
}

int main() {
    int number = 8;
    printf("%d is even: %s\n", number, is_even(number) ? "true" : "false");
    printf("%d is odd: %s\n", number, is_odd(number) ? "true" : "false");
    return 0;
}
