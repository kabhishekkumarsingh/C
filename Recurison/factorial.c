#include <stdio.h>
int fact(int n){
    if(n==0)
    return 1;
    if(n>=2)
    return n*fact(n-1);
}

int main()
{
    int n,fact1;
    printf("Enter a number to find factorial:");
    scanf("%d",&n);
    fact1=fact(n);
    printf("Factorial=%d",fact1);
    return 0;
}
