#include<stdio.h>

void main(){
    int i,num,result;
    printf("Enter number to display the table: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        result = num*i;
        printf("\n %d * %d = %d",num,i,result);
    }
}