#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int result=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    result=a*a+b*b+c*c+d*d+e*e;
    printf("%d", result%10);
    return 0;
}