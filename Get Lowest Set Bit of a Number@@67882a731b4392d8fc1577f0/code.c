// Your code here...
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==0){
        printf("-1\n");
        return 0;
    }
    while ((a&1)==0){
        a>>=1;
        b++;
    }
    
    printf("%d",b);
    return 0;
}