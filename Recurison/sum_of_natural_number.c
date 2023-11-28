#include <stdio.h>
int sum_of_nNumber(int n){
    if(n>0)
    return n+sum_of_nNumber(n-1);
}

int main()
{
    int n,sum;
    printf("Enter a number to find sum:");
    scanf("%d",&n);
    sum=sum_of_nNumber(n);
    printf("Sum=%d",sum);
    return 0;
}
