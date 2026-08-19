#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    float average = (float)sum / n;

    printf("Average = %.2f", average);

    return 0;
}