// sum of inputed five digit numbers
#include<stdio.h>

void main(){
    int num,a,b,c,d,e;
    printf("Enter five-digit number: ");
    scanf("%d",&num);

    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=(num/10000);
    printf("%d is the sum of five digits: ",a+b+c+d+e,num);
}