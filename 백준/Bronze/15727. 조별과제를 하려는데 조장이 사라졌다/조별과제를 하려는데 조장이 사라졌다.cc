#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int result= t/5;
    if(t%5!=0){
        result++;
    }
    printf("%d", result);
    return 0;
}
