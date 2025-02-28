// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    printf("%d",num==0?32:
    __builtin_ctz(num));
    return 0;
}