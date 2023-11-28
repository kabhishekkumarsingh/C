#include <stdio.h>
int sum(int n){
  
    if(n>0)
    return n+sum(n-1);
}

int main()
{
    int n,sum1;
    printf("Enter a number to find sum:");
    scanf("%d",&n);
    sum1=sum(n);
    printf("Factorial=%d",sum1);
    return 0;
}
