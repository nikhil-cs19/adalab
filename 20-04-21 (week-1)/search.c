#include<stdio.h>
int recursiveLS(int arr[],int n,int key){
    if (arr[n]== key){
        printf("found at index %d",n);
    }
    else{
        return recursiveLS(arr,n-1,key);
    }
}
int recursiveBS(int arr[],int low,int high,int key){
    int mid = (low+high)/2;
    if(low<=high){
        if(arr[mid]==key){
        printf("Found at index %d",mid);
        }
        else if(arr[mid]<key){
            recursiveBS(arr,mid+1,high,key);
        }
        else{
           recursiveBS(arr,low,mid-1,key);
        }


    }
     else {
        return -1;
     }
}

 void main(){
 int n,key,choice=20;
 int temp,high,low;


 //LinearSearch(key,arr);
 printf("Enter your choice \n 1. Linear Search \n 2. Binary Search \n");
  scanf("%d",&choice);
  switch(choice){
  case 1:{
       printf("enter no of elements you want insert in an array\n");
         scanf("%d",&n);
         int arr[n];
         printf("Enter the elements\n");

         for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
         }

         printf("Enter the integer that need to be searched\n");
         scanf("%d",&key);
         int ic=20;
         printf("1. Iterative Linear search\n2. Recursive linear search\n");
         scanf("%d",&ic);
         switch(ic){
            case 1:{
                int flag=0;
                for(int i=0;i<n;i++){
                    if(arr[i]==key){
                        printf("found at index %d\n",i);
                        flag+=1;
            }
                if(flag==0){
                    printf("element not found");
                }
         }
            break;
        }
            case 2:{
                recursiveLS(arr,n-1,key);
                break;
            }
    }
    break;
  }
  case 2:{
       printf("enter no of elements you want insert in an array\n");
         scanf("%d",&n);
         int arr[n];
         printf("Enter the elements in ascending order\n");

         for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
         }

         printf("Enter the integer that need to be searched\n");
         scanf("%d",&key);
         int ic=20;
         printf("1. Iterative Binary search\n2. Recursive Binary search\n");
         scanf("%d",&ic);
         //Binary search
        low=0;
        high=n-1;
        int mid=0;

        switch(ic){
            case 1:{
                while(low<=high){
            mid = ((low + high)/2);
              if (arr[mid] == key){
                    printf("found at index %d ",mid);
                    break;
                }
               else if (arr[mid]<key){
                low = mid + 1;
               }

              else{
                high = mid - 1;
                 }
            }
            break;
            }
            case 2:{
                recursiveBS(arr,low,high,key);
            }
        }
            break;
   }
  }
}

