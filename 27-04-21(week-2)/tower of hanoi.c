#include<stdio.h>
void TOH(int num,char from_rod,char to_rod,char aux_rod){
    if(num==1){
        printf("Move disk 1 from %c to %c \n",from_rod,to_rod);
    }
    else{
        TOH(num-1,from_rod,aux_rod,to_rod);
        printf("Move disk %d  from %c to %c \n",num,from_rod,to_rod);
        TOH(num-1,aux_rod,to_rod,from_rod);
    }
}
void main(){
    int num;
    printf("Enter the number of disks\n");
    scanf("%d",&num);
    TOH(num,'A','C','B');
}
