// Your code here...
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') { // Count characters until the null terminator is encountered
        length++;
    }
    return length;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Read input including spaces

    int length = stringLength(str);
    printf("%d\n", length);

    return 0;
}
