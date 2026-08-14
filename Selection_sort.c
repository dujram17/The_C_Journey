#include<stdio.h>
void print(int *arr,int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void selectionsort(int *arr,int n){
    for(int i =0;i<n-1;i++){
        int minIdx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
            minIdx = j;
            }
        }
         int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
    print(arr,n);
}
int main(){
    int arr[] = {6,4,3,5,2,1};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    return 0;
}