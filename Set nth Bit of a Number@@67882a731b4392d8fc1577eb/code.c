// Your code here...
#include <stdio.h>

int main() {
    int number, bit_position;
    scanf("%d %d", &number, &bit_position);
    
    int updated_number = number | (1 << bit_position);
    
    printf("%d\n", updated_number);
    
    return 0;
}