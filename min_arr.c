#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int );
    int min = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[min]>arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum array:%d",min);

    return 0;
}