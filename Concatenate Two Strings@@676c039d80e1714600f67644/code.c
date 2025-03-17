// Your code here...
#include <stdio.h>

void concatenateStrings(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string to the first
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the concatenated string
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf(" ");
    fgets(str1, sizeof(str1), stdin);

    printf(" ");
    fgets(str2, sizeof(str2), stdin);

    concatenateStrings(str1, str2);

    printf("%s", str1);

    return 0;
}
