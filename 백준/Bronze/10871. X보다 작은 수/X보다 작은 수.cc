#include<stdio.h>
int main(){
    int array[10000];
    int n, v;
    scanf("%d %d", &n, &v);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){
        if(v>array[i]){
        printf("%d ",array[i]);
        }

    }
         return 0;
}