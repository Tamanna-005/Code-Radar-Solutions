#include <stdio.h>
#include <stdbool.h>

bool is_msb_set(int number) {
    // Mask to check the MSB (most significant bit) in a 32-bit integer
    unsigned int mask = 1 << 31;
    return (number & mask) != 0;
}

int main() {
    int number1 = 0x80000000;  // Most significant bit set
    int number2 = 0x7FFFFFFF;  // Most significant bit not set

    printf("MSB of number1 is %s\n", is_msb_set(number1) ? "set" : "not set");
    printf("MSB of number2 is %s\n", is_msb_set(number2) ? "set" : "not set");

    return 0;
}
Loading Code...