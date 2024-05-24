#include<stdio.h>
int main(){
    int m, h, sum, num[5];
    scanf("%d %d", &m, &h);
    sum= m*h;
    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ", num[i]-sum);
    }
    return 0;
}