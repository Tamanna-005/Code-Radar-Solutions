// Your code here...
#include <stdio.h>

int main() {
    int N, i, j;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {

        for (' ' * (N - i - 1) + '*' * (2 * i + 1)) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
