// reverse five digit number
#include<stdio.h>

void main(){
    int a, b, c, d, e,number, result;
    printf("Enter five-digit number: ");
    scanf("%d", &number);

    e = number % 10;
    d = (number / 10) % 10;
    c = (number / 100) % 10;
    b = (number / 1000) % 10;
    a = (number / 10000);

    result = 10000 * e + 1000 * d + 100 * c + 10 * b + a;
    printf("Result of reversed number: %d", result);
}