#include<stdio.h>
void binTodec(int binnum){
    int n = binnum;
    int decnum = 0;
    int pow = 1;
    while(n>0){
        int ldgt = n%10;
        decnum += ldgt*pow;
        pow = pow*2;
        n = n/10;
    }
    printf("%d",decnum);
}
int main(){
    binTodec(101);
    return 0;
}