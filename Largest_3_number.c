#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("A is Largest");
    }
    else if(b>=a && b>=c){
        printf("B is Largest");
    }
    else{
        printf("C is Largest");
    }
    return 0;
}