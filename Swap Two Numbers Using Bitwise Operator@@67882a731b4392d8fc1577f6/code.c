// Your code here...
#include <stdio.h>

void swapUsingXOR(int *a, int *b) {
    if (a != b) {  
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    swapUsingXOR(&a, &b);
    
    printf("%d %d\n", a, b);
    return 0;
}