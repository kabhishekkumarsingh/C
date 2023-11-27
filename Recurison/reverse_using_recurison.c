#include <stdio.h>

void natural_number_reverse(int n){
    if(n>0){
        
        printf("%d ",n);
                natural_number_reverse(n-1);

    }
}

int main()
{
int n;
printf("Enter number:");
scanf("%d",&n);
natural_number_reverse(n);
    return 0;
}
