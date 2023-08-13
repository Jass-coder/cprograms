// find distance in meters,inches,feet,centimeter

#include<stdio.h>

void main(){
    float distance,meter,feet,inches,centimeter;
    printf("Enter distance between moga and dpn in km: ");
    scanf("%f",&distance);

    meter = distance * 1000;
    feet = distance *3280.84;
    inches = distance * 39370.08;
    centimeter = distance * 100000.0032;
    printf("%f %f %f %f",meter,feet,inches,centimeter);
}