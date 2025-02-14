#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> n) & 1;
}

int main() {
    int number = 29; // Example number
    int n = 3;       // Example bit position (0-based index)
scanf("%d",&numer);
scanf("%d",&n);
    int bitValue = getNthBit(number, n);
    printf("The %dth bit of %d is: %d\n", n, number, bitValue);

    return 0;
}
