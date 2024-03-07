#include<stdio.h>
int main()
{
    //x=물건 총가격 n=물건종류의 수 a=물건하나의 값 b=물건의 갯수 num=물건가격 
    int X, N, a, b;
    int result = 0;
    scanf("%d\n%d", &X, &N);
    for(int i = 0; i<N; i++){
        scanf("%d %d", &a, &b);
        result += (a*b);
        
    }
    
    if(result == X){
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}