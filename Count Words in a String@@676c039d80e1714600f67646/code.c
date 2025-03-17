// Your code here...
#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0; // Exit word on encountering a space
        } else if (inWord == 0) {
            inWord = 1; // Enter word
            count++;    // Increment word count
        }
    }

    return count;
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin); // Allows input of strings with spaces
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    int wordCount = countWords(str);
    printf("%d\n", wordCount);

    return 0;
}
