
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
        printf("The numbers have opposite signs.\n");
    } else {
        printf("The numbers do not have opposite signs.\n");
    }

    return 0;
}
