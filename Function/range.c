#include <stdio.h>
void range(int a){
    if(a>=1 && a<=100)
    printf("in range");
    
    else 
    printf("not in range");
}

int main()
{
    int n;
   printf("Enter a number between 1 to 100:");
   scanf("%d",&n);
   range(n);

    return 0;
}
