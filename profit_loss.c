#include<stdio.h>

int main(){
    int cp, sp;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cp, &sp);

    if(sp > cp){
        printf("Profit = %d", sp - cp);
    }
    else if(sp < cp){
        printf("Loss = %d", cp - sp);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}