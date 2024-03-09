#include <stdio.h>


int main(){

    int a, b, c;
    scanf("%d", &a);
    int i;
    for(i=1; i<=a; i++){
        scanf("%d %d", &b, &c);
        printf("Case #%d: %d\n",i, b+c);
    }
    

}