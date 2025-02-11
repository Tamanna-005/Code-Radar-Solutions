#include <stdio.h>
int main(){
    char a='A',b='B',c='C',d='D',e='F';
    scanf("%c%c%c%c%c",a,b,c,d,e);
    if (a)
    {
        printf("Excellent");
    }
    else if(b)
    {
        printf("Good");
    }
    else if(c)
    {printf("Average");
    }
    else if(d){
        printf("Below Average");
    }
    else if(e){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}