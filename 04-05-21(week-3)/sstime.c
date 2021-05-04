#include<stdio.h>
#include<time.h>

void selectionSort(int arr[],int n){
    int smallest_index,temp;
    for(int i=0;i<n-1;i++){
        smallest_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest_index]){
                smallest_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
}
void main(){
    int n;
    clock_t start,end;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=n-i;
    }
    start = clock();
    selectionSort(arr,n);
    end = clock();
    double time_taken = ((double)end-start)/CLOCKS_PER_SEC;
    printf("Time taken for sorting  %d elements is %f sec\n",n,time_taken);
}
