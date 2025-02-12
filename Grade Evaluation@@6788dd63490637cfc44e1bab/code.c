#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);

    if("%c",a='A'){
    printf("Excellent \n");}
    

    else if ("%c",a='B){
        printf("Good \n");}

    else if("%c",a='C'){
    printf("Average \n");}

    else if("%c",a='D'){
    printf("Below Average \n");}

    else if("%c",a='F'){
    printf("Fail \n");}
    
    
  else{
    printf("Invalid grade \n");

    }
    return 0;
}