#include<stdio.h>

void main(){
    int year;
    printf("Enter Year: ");
    scanf("\n%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || year%400 == 0){
        printf("It's Leap Year");
    }else{
        printf("Not a Leap year");
    }
}