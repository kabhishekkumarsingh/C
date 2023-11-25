#include <stdio.h>

void upper_lower(char a){
    if(a<=90 && a>=65)
    printf("Upper case");
    else
    printf("lower case");
}
int main()
{
char n;
printf("Enter a alphabet: ");
scanf("%c",&n);
upper_lower(n);

    return 0;
}
