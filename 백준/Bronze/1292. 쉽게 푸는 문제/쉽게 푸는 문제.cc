#include <stdio.h>

int main(){
    int A = 0, B = 0;
    int hap = 0;
    int cnt = 0;
    
    scanf("%d %d", &A, &B);
    
    for (int i = 1; i <= 1000; i++) {
        for(int j = 0; j < i; j++){
            cnt++;
            if(A <= cnt && cnt <= B){
                hap += i;
            }
        }
        
    }
    printf("%d", hap);
}