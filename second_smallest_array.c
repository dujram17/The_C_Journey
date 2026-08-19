#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int smallest = arr[0];
    int second = 9999;

    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }

    printf("Second smallest = %d", second);

    return 0;
}