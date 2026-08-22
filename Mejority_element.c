#include <stdio.h>

int main() {
    int a[] = {3, 2, 3};
    int n = 3;

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        if(count > n / 2) {
            printf("Majority Element = %d", a[i]);
            break;
        }
    }

    return 0;
}