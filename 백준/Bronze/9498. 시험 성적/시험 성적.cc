//90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작
#include<stdio.h>
int main(){
    int A;
    scanf("%d", &A);
    if(A>89){
        printf("A");
    }
    else if(A>79){
        printf("B");
    }
    else if(A>69){
        printf("C");
    }
    else if(A>59){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}