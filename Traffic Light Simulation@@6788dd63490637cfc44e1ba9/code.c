#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch (a){
        case R:
        printf("stop");
        break;
        case G:
        printf("Go");
        break:
        case Y:
        printf("Slow Down");
        break;
        default;
        printf("Invalid input");

    }
    return 0;
    
}