#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 2, 4};
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(a[i] == a[j]) {
                printf("Duplicate element = %d", a[i]);
                return 0;
            }
        }
    }

    printf("No duplicate element");

    return 0;
}