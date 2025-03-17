#include <stdio.h>
#include <string.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is a vowel (uppercase or lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Read input including spaces
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    int vowelCount = countVowels(str);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
