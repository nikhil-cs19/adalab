#include<stdio.h>
#include<string.h>
int patternMatch(char text[],char pattern[]){
    int ls,lp,count=0;
    ls=strlen(text);
    lp=strlen(pattern);
    if (ls<lp){
        printf("length of pattern is greater than the text");
        return -1;
    }
    for(int i=0;i<=ls-lp;i++){
        count=0;
        for(int j=0;j<lp;j++){
            if(text[i+j]!=pattern[j]){
                break;
            }
            count++;
            if(count==lp){
                printf("Found at index %d\n",i);
                return 1;
            }
        }
    }
    printf("pattern not found");
    return -1;
}
void main(){
    char text[30],pattern[30];
    printf("Enter the text\n");
    scanf("%s",text);
    printf("Enter the pattern that need to be searched\n");
    scanf("%s",pattern);
    patternMatch(text,pattern);
}
