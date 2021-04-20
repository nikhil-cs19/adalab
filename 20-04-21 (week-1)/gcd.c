#include<stdio.h>
int gcd(int m,int n){
    if (n%m==0){
        printf("in recursive method GCD = %d",m);
    }
    else{
        return gcd(n%m,m);
    }
}
void main(){
int m,n,choice=20,r;
printf("Enter the numbers to find gcd\n");
scanf("%d%d",&m,&n);
printf("1.Iterative \n2. recursive\n");
scanf("%d",&choice);
switch(choice){
    case 1:{
        while(n%m!=0){
            r = n%m;
            n=m;
            m=r;
        }
        printf("GCD = %d",m);
        break;
    }
    case 2:{
        gcd(m,n);
        break;
    }
}
}

