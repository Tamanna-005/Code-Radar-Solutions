#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> n) & 1;
}

int main() {
    int number // Example number
    int n       // Example bit position (0-based index)
scanf("%d",&numer);
scanf("%d",&n);
    int bitValue = getNthBit(number, n);
    printf(" %d\n", n);

    return 0;
}
