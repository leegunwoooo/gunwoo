#include<stdio.h>
int main()
{
    int n;
    int num=0;
    scanf("%d", &n);
    for(int a = 0; a<=n; a++)
    {
        num+=a;
    }
    printf("%d", num);
    return 0;
}