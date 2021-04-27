#include<stdio.h>
#include<time.h>

void main(){
    int n,smallest_index,temp;
     int j=0;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        smallest_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[smallest_index]){
                smallest_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
    printf("\n\nelements after sorting\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
