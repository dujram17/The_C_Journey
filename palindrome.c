#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int original,rev = 0;
    original = n;
    while(n>0){
        int lastdgt = n%10;
        rev = rev*10+lastdgt;
        n = n/10;

    }
    if(original == rev){
        printf("Palindrome Number");
    }
    else{
        printf("Not palindrome number");
    }
    return 0;
}