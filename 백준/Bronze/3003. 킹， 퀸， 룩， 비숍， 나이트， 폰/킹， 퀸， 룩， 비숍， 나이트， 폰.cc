#include<stdio.h>
int main(){
    int chess[100]={1, 1, 2, 2, 2, 8};
    int mal[100];
    for(int i=0; i<6; i++){
        scanf("%d ", &mal[i]);
    }
    for(int i=0; i<6; i++){
        printf("%d ", chess[i]-mal[i]);
    }
    return 0;
}