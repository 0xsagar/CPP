#include<stdio.h>

int isLeap(int n){
    if(n%400==0){
        printf("1");
    }else if (n%100==0){
        printf("0");
    }else if(n%4==0){
        printf("1");
    }else{
        printf("0");
    }
}

int main(){
    int n = 2002;
    //scanf("%d", &n);
    isLeap(n);
}