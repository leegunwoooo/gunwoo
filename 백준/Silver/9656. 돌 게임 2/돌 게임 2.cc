#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int result=N%2;
    if(result==0){
        printf("SK");
    }else{
        printf("CY");
    }
    return 0;
}