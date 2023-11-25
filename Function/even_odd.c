#include <stdio.h>

void evenOdd(int a){
    if(a%2==0)
    printf("Even");
    else
    printf("odd");
}
int main()
{
int n;
printf("Enter number: ");
scanf("%d",&n);
evenOdd(n);

    return 0;
}
