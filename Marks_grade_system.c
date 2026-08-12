#include<stdio.h>

int main(){
    int a,b,c,d,e,total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    total = a+b+c+d+e;
    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade A");
    else if(percentage >= 80)
        printf("Grade B");
    else if(percentage >= 70)
        printf("Grade C");
    else if(percentage >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}