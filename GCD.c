#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    printf("GCD:%d",a);
    return 0;
}