#include <stdio.h>
void table(int a){
   for(int i=1;i<=10;i++){
       printf("%d\n",a*i);
   }
}

int main()
{
    int n;
   printf("Enter a number to print table:");
   scanf("%d",&n);
   table(n);

    return 0;
}
