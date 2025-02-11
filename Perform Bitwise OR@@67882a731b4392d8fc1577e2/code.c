
#include <stdio.h>

int main() {
    int a, b, result;
    scanf("%d%d", &a, &b);
    
    // Perform bitwise OR operation
    result = a | b;
    
    // Print the result
    printf("The result of %d | %d is %d\n", a, b, result);
    
    return 0;
}
