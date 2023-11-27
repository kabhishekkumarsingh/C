#include <stdio.h>

void natural_number(int n){
    if(n>0){
        natural_number(n-1);
        printf("%d ",n);
    }
}

int main()
{
int n;
printf("Enter number:");
scanf("%d",&n);
natural_number(n);
    return 0;
}
