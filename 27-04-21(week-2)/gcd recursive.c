#include<stdio.h>
int Gcd(int m,int n){
    if(n%m == 0){
        printf("Gcd = %d",m);
    }
    else{
        return Gcd(n%m,m);
    }
}
void main(){
    int m,n;
    printf("Enter the numbers\n");
    scanf("%d%d",&m,&n);
    Gcd(m,n);
}
