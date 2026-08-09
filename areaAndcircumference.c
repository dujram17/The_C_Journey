#include<stdio.h>
int main(){
    float area,circumference,radius;
    float pi = 3.14;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("\nArea of circle:%f",area);
    circumference = 2*pi*radius;
    printf("\nCircumference of circle:%f",circumference);
    return 0;
}