#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int );
    int max = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[max]<arr[i]){
            max = arr[i];
        }
    }
    printf("Max array:%d",max);

    return 0;
}