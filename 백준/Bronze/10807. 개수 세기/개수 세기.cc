#include<stdio.h>
int main(){
    int array[100];
    int n, v, result=0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &v);
    for(int i=0; i<n; i++){
        if(v==array[i]){
            result++;
        }

    }
    printf("%d", result);
    return 0;
}